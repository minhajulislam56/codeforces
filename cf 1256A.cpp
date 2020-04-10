#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--){
        int a,b,n,s;
        cin>>a>>b>>n>>s;

        int x=min(a,s/n);
        int fir=s-(x*n);
        if(fir<=b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
