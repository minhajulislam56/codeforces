#include<bits/stdc++.h>
using namespace std;
#define mx 200005
int dep[mx], subt[mx];
bool vis[mx]={0};
vector<int>edge[mx];
int dfs(int u)
{
    vis[u]=true;
    for(auto i:edge[u]){
        if(!vis[i]){
            dep[i]=dep[u]+1;
            subt[u]+=dfs(i)+1;
        }
    }
    return subt[u];
}
int main()
{
    int n, k;
    cin>>n>>k;
    for(int i=0;i<n-1;i++){
        int u, v;
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    subt[1]=dfs(1);
    long long sum[n+5]={0}, tot=0;
    for(int i=1;i<=n;i++) sum[i]=dep[i]-subt[i];
    sort(sum+1, sum+n+1, greater<long long>());
    for(int i=1;i<=k;i++) tot+=sum[i];
    cout<<tot<<endl;
    return 0;
}
