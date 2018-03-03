#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define MAX 999999999
LL price[32], vol[32],n;
LL dp[100][1000000];
int ans=1<<28;
int call(int i,int amount,int pr)
{
    if(i>n) { //All vols have been taken
        if(amount==0)return pr;
        else return 1<<28;
    }
    if(dp[i][amount]!=0) return dp[i][amount]; //no need to calculate same state twice
    int ret1=0,ret2=0;
    if(amount-vol[i]>=0) ret1=call(i,amount-vol[i],pr+price[i]); //try to take vol i
    ret2=call(i+1,amount,pr);
    ans=min(ans,min(ret1,ret2)); //dont take vol i
    return dp[i][amount]=(ret1|ret2); //storing and returning.
}
int main()
{
    ios_base::sync_with_stdio(false);
    int l;
    cin>>n>>l;
    for(int i=1;i<=n;i++){
        cin>>price[i];
        vol[i]=(1<<i-1);
    }
    cout<<call(1,l,0)<<endl;
    cout<<ans<<endl;
    return 0;
}
