#include<bits/stdc++.h>
using namespace std;
#define MAX 200005
vector<int> edge[MAX];
bool vis[MAX];
int c[MAX], node, val;
void dfs(int u, int k=0)
{
    if(k>val){
        val=k;
        node=u;
    }
    vis[u]=true;
    for(auto v:edge[u]){
        if(!vis[v]){
            dfs(v, k+(c[u]==c[v]?0:1));
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d", &c[i]);
    }
    for(int i=0;i<n-1;i++){
        int u,v;
        scanf("%d%d", &u, &v);
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    dfs(1);
    memset(vis, false, sizeof vis);
    dfs(node);
    int x=ceil(val/2.0);
    printf("%d\n", x);

    return 0;
}
