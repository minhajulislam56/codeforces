#include<bits/stdc++.h>
using namespace std;
int n, x, y;
int dp[10005][10005];
int func(int cl, int tm)
{
    if(dp[cl][tm]!=-1) return dp[cl][tm];
    if(cl>n){
        return dp[n][tm]=func(cl-1, tm+x);
    }
    if(cl==n) return dp[cl][tm]=tm;
    //cout<<cl<<" "<<tm<<endl;
    //if(cl+cl<=n) return dp[cl][tm]=func(cl+cl, tm+y);
    int a=func(cl+1, tm+x);
    int b=func(cl+cl, tm+y);
    return dp[cl][tm]=min(a,b);
}
int main()
{
    freopen("input.txt", "r", stdin);
    cin>>n>>x>>y;
    memset(dp, -1, sizeof dp);
    cout<<func(1,x)<<endl;
    return 0;
}
