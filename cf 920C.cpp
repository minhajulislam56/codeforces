#include<bits/stdc++.h>
using namespace std;
#define MAX 200007
int dp[MAX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    string st,tmp;
    st="0";
    cin>>tmp;
    st+=tmp;
    for(int i=1;i<=n-1;i++){
        st[i]=='1'?dp[i]=dp[i-1]+1:dp[i]=dp[i-1];
        if(arr[i+1]<i+1){
            int df=i+1-arr[i+1];
            if(dp[i]-dp[arr[i+1]-1]!=df){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
