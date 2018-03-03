#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,in;
    cin>>n>>t;
    int day=0;
    for(int i=0;i<n;i++){
        if(t<=0)
            break;
        cin>>in;
        day++;
        t-=86400-in;
    }
    cout<<day<<endl;

    return 0;
}
