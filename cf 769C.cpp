#include<bits/stdc++.h>
using namespace std;
#define mx 1005
int n, m, k;
int x[]={+1, 0, 0, -1};
int y[]={0, -1, +1, 0};
char grid[mx][mx], ch[]={'D', 'L', 'R', 'U'};
string ans="IMPOSSIBLE";
void dfs(pair<int, int> u, string st)
{
    if(ans!="IMPOSSIBLE") return;
    if(st.length()==k/2){
        ans=st;
        return;
    }

    for(int i=0;i<4;i++){
        int p=u.first+x[i], q=u.second+y[i];
        if((p>=1 && p<=n) && (q>=1 && q<=m) && (grid[p][q]!='*')){
            st+=ch[i];
            pair<int, int> pq={p,q};
            dfs(pq, st);
        }
    }
}
int main()
{
    cin>>n>>m>>k;
    pair<int, int> root;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='X'){
                root={i,j};
            }
        }
    }
    if(k%2){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    dfs(root, "");
    if(ans=="IMPOSSIBLE") cout<<ans<<endl;
    else{
        cout<<ans;
        for(int i=ans.length()-1;i>=0;i--){
            cout<<(ans[i]=='L'?'R':ans[i]=='R'?'L':ans[i]=='D'?'U':'D');
        }
        cout<<endl;
    }

    return 0;
}
