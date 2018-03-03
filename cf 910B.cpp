#include<bits/stdc++.h>
using namespace std;
int dp[10][10];
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a,b;
    cin>>n>>a>>b;
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            dp[i][j]=9999999;
    dp[0][0]=0;

    for(int i=0;i<=4;i++){
        for(int j=0;j<=2;j++){
            for(int k=0;k<=i;k++){
                for(int l=0;l<=j;l++){
                    if(((k*a)+(l*b))<=n)
                        dp[i][j]=min(dp[i][j],dp[i-k][j-l]+1);
                }
            }
        }
    }
    cout<<dp[4][2]<<endl;
    return 0;
}
