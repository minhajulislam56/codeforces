#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l1,l2,r1,r2,n,m;
    l1=-1;
    r1=1<<30;
    l2=-1;
    r2=1<<30;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        l1=max(l1,x);
        r1=min(r1,y);
    }
    cin>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        l2=max(l2,x);
        r2=min(r2,y);
    }
    cout<<max(0,max(l2-r1,l1-r2));
    return 0;
}
