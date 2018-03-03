#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define MAX 100005
bool visited[MAX];
LL cost[MAX];
vector<pair<int,LL> > edge[MAX];
LL maxx=LLONG_MIN;
void dfs(int u)
{
    for(int i=0;i<edge[u].size();i++){
        int v=edge[u][i].first;
        if(!visited[v]){
            visited[v]=true;
            cost[v]=cost[u]+edge[u][i].second;
            if(cost[v]>maxx)
                maxx=cost[v];
            dfs(v);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    LL sum=0;
    for(int i=0;i<n-1;i++){
        LL u,v,w;
        cin>>u>>v>>w;
        sum+=w;
        edge[u].push_back(make_pair(v,w));
        edge[v].push_back(make_pair(u,w));
    }
    cost[1]=0;
    visited[1]=true;
    dfs(1);
    maxx>0?cout<<(sum*2)-maxx<<endl:cout<<0<<endl;
    return 0;
}
