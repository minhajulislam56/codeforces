#include<bits/stdc++.h>
using namespace std;
#define MAX 10007

vector<int> edge[MAX];
bool visited[MAX];
int color[MAX];
int cnt=0;
void dfs(int u, int pclr)
{
    if(color[u]!=pclr)
        cnt++;
    for(int i=0;i<edge[u].size();i++){
        int v=edge[u][i];
        if(!visited[v]){
            visited[v]=true;
            dfs(v, color[u]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;

    for(int i=2;i<=n;i++){
        int x;
        cin>>x;
        edge[x].push_back(i);
        edge[i].push_back(x);
    }
    for(int i=1;i<=n;i++)
        cin>>color[i];

    visited[1]=true;
    dfs(1, -1);
    cout<<cnt<<endl;
    return 0;
}

