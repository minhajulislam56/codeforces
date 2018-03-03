#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string st;
    cin>>st;
    int l,r,u,d;
    l=r=u=d=0;
    int cnt=0;
    for(int i=0;i<st.size();i++){
        (st[i]=='L')?l++:(st[i]=='R')?r++:(st[i]=='U')?u++:d++;
    }
    cnt+=min(l,r);
    cnt+=min(u,d);
    cout<<cnt*2<<endl;

    return 0;
}
