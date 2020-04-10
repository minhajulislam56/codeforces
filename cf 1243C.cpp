#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n, ans;
    cin>>n;
    ans=n;
    for(long long i=2;i<=sqrtl(n);i++){
        if(n%i==0){
            ans=__gcd(ans,i);
            ans=__gcd(ans,n/i);
        }
    }
    cout<<ans<<endl;

    return 0;
}
