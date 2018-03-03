#include<bits/stdc++.h>
using namespace std;

//typedefs
#define MAX 100007
#define PB push_back

vector<int> edge[MAX];
long long int nodes[2];
bool visited[MAX];

void dfs(int u, int p)
{
    visited[u]=true;
    nodes[p]++;
    for(int i=0;i<edge[u].size();i++){
        if(!visited[edge[u][i]]){
            (p)?dfs(edge[u][i],0):dfs(edge[u][i],1);
        }
    }
}
int main()
{
    int n,u,v;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        edge[u].PB(v);
        edge[v].PB(u);
    }
    dfs(1,0);

    cout<<nodes[0]*nodes[1]-(n-1)<<endl;

    return 0;
}
