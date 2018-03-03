#include<bits/stdc++.h>
using namespace std;
vector <int> adj[100005];
map <int,int> mp;

int edge_id[100];
int vis[100];
void dfs(int st, int n)
{
    memset(vis,0,sizeof vis);
    memset(edge_id,0,sizeof edge_id);

    stack <int> s;
    s.push(st);
    while(!s.empty()){
        int u=s.top();
        s.pop();
        while(edge_id[u]<adj[u].size()){
            int v=adj[u][edge_id[u]];
            edge_id[u]++;
            if(vis[v]==0){
                vis[v]=1;
                s.push(u);
                s.push(v);
                break;
            }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;

    while(m--){
        int x,y;
        cin>>x>>y;
        if(mp[x]==0)
            mp[x]=1;
        if(!mp[y])
            mp[y]=1;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=0;i<n;i++){

    }


    return 0;
}
