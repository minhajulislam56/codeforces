#include<bits/stdc++.h>
using namespace std;
#define MAX 100007
#define pii pair<int,int>
const int inf=2e18+5;
struct comp{
    bool operator()(const pii &a, const pii &b){
        return a.second>b.second;
    }
};
priority_queue <pii,vector<pii>,comp> pq;
vector <pii> adj[MAX];
bool mark[MAX];
int dist[MAX];
int parent[MAX];
int print(int k)
{
    if(parent[k]!=-1)
        print(parent[k]);
    cout<<k<<" ";
}
int main()
{
    int n,e;
    //freopen("input.txt","r",stdin);
    cin>>n>>e;
    fill(parent,parent+n+5,-1);
    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back(pii(v,w));
        adj[v].push_back(pii(u,w));
    }
    for(int i=0;i<=n;i++)
        dist[i]=inf;

    pq.push(pii(1,0));
    dist[1]=0;
    while(!pq.empty()){
        int u=pq.top().first;
        pq.pop();
        if(mark[u])
            continue;
        for(int i=0;i<adj[u].size();i++){
            int v=adj[u][i].first;
            int w=adj[u][i].second;
            if(!mark[v] && dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                //cout<<"node: "<<v<<endl;
                parent[v]=u;
                pq.push(pii(v,dist[v]));
            }
        }
        mark[u]=true;
    }
    /*for(int i=1;i<=n;i++){
        cout<<"Node"<<i<<" Distance: "<<dist[i]<<endl;
    }*/
    if(dist[n]==inf)
        cout<<-1<<endl;
    else{
        print(parent[n]);
        cout<<n<<endl;
    }

    return 0;
}
