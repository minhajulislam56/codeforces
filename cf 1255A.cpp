#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        long long a,b,ans=0;
        cin>>a>>b;
        if(a>b) swap(a,b);
        b=b-a;
        ans+=b/5;
        b=b%5;
        ans+=b/2;
        b=b%2;
        ans+=b;
        cout<<ans<<endl;
    }

    return 0;
}
