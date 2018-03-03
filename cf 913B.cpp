#include<bits/stdc++.h>
using namespace std;
#define MAX 1010
vector<int> edge[MAX];
bool visited[MAX];
int values[MAX];
void dfs(int u)
{
    for(int i=0;i<edge[u].size();i++){
        int v=edge[u][i];
        if(!visited[v]){
            visited[v]=true;
            if(edge[v].size()==1)
                values[u]+=1;
            dfs(v);
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
    visited[1]=true;
    dfs(1);
    for(int i=1;i<=n;i++){
        if(edge[i].size()>=2 && values[i]<3){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}

