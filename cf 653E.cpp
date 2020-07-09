#include<bits/stdc++.h>
using namespace std;
#define mx 300005
map<pair<int,int>, bool> ped;
set<int> st;
int n, m, k;
vector<int> edge[mx];
bool vis[mx];
void dfs(int u)
{
    vis[u]=true;

    int val=0;
    while(true){
        auto sitr=st.upper_bound(val);
        if(sitr==st.end()) break;
        val=*sitr;
        auto itr=ped.find({u, val});
        if(itr==ped.end()){
            edge[u].push_back(val);
            edge[val].push_back(u);
            st.erase(val);
        }
    }

    int sz=edge[u].size();
    for(int i=0;i<sz;i++){
        int v=edge[u][i];
        if(!vis[v]) dfs(v);
    }
}
int main()
{
    scanf("%d%d%d", &n, &m, &k);
    int deg=n-1;
    for(int i=0;i<m;i++){
        int a, b;
        scanf("%d%d", &a, &b);
        if(a==1 || b==1) deg--;
        ped[{a,b}]=ped[{b,a}]=true;
    }
    if(deg<k){
        printf("impossible\n");
        return 0;
    }
    for(int i=2;i<=n;i++) st.insert(i);
    vis[1]=true;
    deg=0;
    for(int i=2;i<=n;i++){
        auto itr=ped.find({1,i});
        if(itr==ped.end() && st.find(i)!=st.end()){
            st.erase(i);
            dfs(i);
            deg++;
        }
    }
    if(deg>k || st.size()) printf("impossible\n");
    else printf("possible\n");


    return 0;
}
