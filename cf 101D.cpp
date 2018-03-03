#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > edge[100];
int siz[100]={0};
bool visited[100];
void dfs(int u)
{
    cout<<u<<endl;
    for(int i=0;i<edge[u].size();i++){
        int v=edge[u][i].first;
        if(!visited[v]){
            visited[v]=true;
            siz[v]+=edge[u][i].second+siz[u];
            //cout<<v<<" "<<edge[u][i].second<<" "<<siz[u];
            dfs(v);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    memset(siz,0,sizeof siz);
    for(int i=0;i<n-1;i++){
        int u,v,t;
        cin>>u>>v>>t;
        edge[u].push_back(make_pair(v,t));
        edge[v].push_back(make_pair(u,t));
    }
    visited[1]=true;
    dfs(1);

    for(int i=1;i<=n;i++){
        cout<<siz[i]<<" ";
    }

    return 0;
}
