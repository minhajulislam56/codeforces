#include<bits/stdc++.h>
using namespace std;
#define MAX 100007
vector<int> edge[MAX];
vector<long long int> gold;
bool visited[MAX];
int main()
{
    int n,m;
    cin>>n>>m;
    gold.push_back(0);
    for(int i=0;i<n;i++){
        long long int num;
        cin>>num;
        gold.push_back(num);
    }

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    long long ans=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            visited[i]=true;
            long long int minn=gold[i];
            queue<int> q;
            q.push(i);
            while(!q.empty()){
                int u=q.front();
                q.pop();

                for(int i=0;i<edge[u].size();i++){
                    int v=edge[u][i];
                    if(!visited[v]){
                        visited[v]=true;
                        if(gold[v]<minn){
                            minn=gold[v];
                        }
                        q.push(v);
                    }
                }
            }
            ans+=minn;
        }
    }
    cout<<ans<<endl;
    return 0;
}
