#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n, k, ans=0;
        string s;
        cin>>n>>k>>s;

        int cnt[n][26];
        memset(cnt, 0, sizeof cnt);
        for(int i=0;i<n;i++){
            cnt[i%k][s[i]-'a']++;
        }

        for(int i=0;i<k;i++){
            int u=i, v=k-i-1, sum=0, mx=0;
            for(int j=0;j<26;j++){
                sum+=cnt[u][j]+cnt[v][j];
                mx=max(mx, cnt[u][j]+cnt[v][j]);
            }
            int mn_asgn=sum-mx;
            ans+=mn_asgn;
        }
        cout<<ans/2<<endl;
    }

    return 0;
}
