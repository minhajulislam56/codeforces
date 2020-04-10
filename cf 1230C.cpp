#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
map<pii,bool> mp;
map<pii, bool> :: iterator itr;
vector<int> edge[50];
bool visited[50];
int par[50], chk[50];
int cnt=0;
void dfs(int u)
{
    visited[u]=true;
    for(int i=0;i<edge[u].size();i++){
        int v=edge[u][i];

        if(!visited[v]){
            par[v]=u;
            bool got=false;
            for(int b=chk[u];b<=6;b++){
                if(got) break;
                pii temp=pii(chk[u],b);
                itr=mp.find(temp);
                if(itr == mp.end()){
                    mp[temp]=true;
                    chk[v]=b;
                    got=true;
                    cnt++;
                }
            }
            dfs(v);
        }
        else if(visited[v] && par[u]!=v){
            itr=mp.find(pii(chk[u],chk[v]));
            if(itr == mp.end()){
                mp[pii(chk[u],chk[v])]=true;
                cnt++;
            }
        }
    }
}
int main()
{
    int n, m;
    cin>>n>>m;

    while(m--){
        int u,v;
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    chk[1]=1;
    dfs(1);
    par[1]=-1;

    cout<<cnt<<endl;

    //for(int i=1;i<=n;i++) cout<<chk[i]<<endl;

    return 0;
}
