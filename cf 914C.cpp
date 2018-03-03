#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int one[1007], dp[1007];
void pretask()
{
    one[1]=0;
    for(int i=2;i<=1001;i++){
        one[i]=one[__builtin_popcount(i)]+1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string in;
    int k;
    cin>>in>>k;
    if(k==0){
        cout<<1<<endl;
        return 0;
    }
    pretask();
    int n=in.length();
    dp[0]=0;
    int base=0;
    for(int i=0;i<n;i++){

        for(int j=n;j;j--){
            dp[j]=(dp[j]+dp[j-1])%MOD;
        }
        if(in[i]=='1') dp[base]++;
        base+=in[i]-'0';
    }
    dp[base]++;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(one[i]==k-1){
            //cout<<i<<" "<<dp[i]<<endl;
            ans+=dp[i]%MOD;
            ans%=MOD;
        }
    }
    if(k==1) ans-=1;
    cout<<ans<<endl;

    return 0;
}
