#include<bits/stdc++.h>
using namespace std;
bool adj[205][205];
int cnt[205], n, m;
vector<pair<int, int> > hsb;
void dfs(int u)
{
    for(int i=1;i<=n+1;i++){
        if(adj[u][i]){
            hsb.push_back({u,i});
            adj[u][i]=adj[i][u]=false;
            dfs(i);
        }
    }
}
int main()
{
    int ca;
    cin>>ca;
    while(ca--){
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int u, v;
            cin>>u>>v;
            adj[u][v]=adj[v][u]=true;
            cnt[u]++, cnt[v]++;
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(cnt[i]%2){
                ans++;
                adj[i][n+1]=adj[n+1][i]=true;
            }
        }
        for(int i=1;i<=n;i++){
            dfs(i);
        }
        cout<<n-ans<<endl;
        for(auto i:hsb){
            if(i.first>n || i.second>n) continue;
            cout<<i.first<<" "<<i.second<<endl;
        }
        memset(cnt, 0, sizeof cnt);
        memset(adj, 0, sizeof adj);
        hsb.clear();
    }

    return 0;
}
