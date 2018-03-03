#include<bits/stdc++.h>
using namespace std;
#define MAX 1000005
vector<int> edge[MAX];
int cost[MAX],sum=0,root,n1,n2;
bool visited[MAX];
int dfs(int u)
{
    for(int i=0;i<edge[u].size();i++){
        int v=edge[u][i];
        if(!visited[v]){
            visited[v]=true;
            //dfs(v);
            cost[u]+=dfs(v);
        }
    }
    if(cost[u]==(sum/3) && u!=root){
        if(!n1) n1=u;
        else if(!n2) n2=u;
        cost[u]=0;
    }
    return cost[u];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int v,t;
        cin>>v>>t;
        edge[i].push_back(v);
        edge[v].push_back(i);
        if(!v)
            root=i;
        cost[i]=t;
        sum+=t;
    }
    if(sum%3){
        cout<<-1<<endl;
        return 0;
    }
    visited[root]=true;
    dfs(root);
    if(n1&&n2)
        cout<<n1<<" "<<n2<<endl;
    else
        cout<<-1<<endl;


    return 0;
}
