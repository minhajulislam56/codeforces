#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    LL n,k,a,b;
    cin>>n>>k>>a>>b;
    LL ans=0;

    while(n>1){
        if(n%k){
            ans+=(n%k)*a;
            n-=n%k;
        }
        if((n-n/k)*a>=b){
            ans+=b;
            n/=k;
        }
        else{
            ans+=(n-1)*a;
            n-=n-1;
        }

    }
    cout<<ans<<endl;
    return 0;
}
