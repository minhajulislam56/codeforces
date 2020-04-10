#include<bits/stdc++.h>
using namespace std;
int n, m, vt[105][105];
bool vis[105];
vector<pair<int,int>> dif;
int main()
{
    cin>>n>>m;
    int pos=-1;
    for(int i=1;i<=m;i++){
        int mx=-1,las;
        for(int j=1;j<=n;j++){
            cin>>vt[i][j];
            mx=max(vt[i][j],mx);
            if(j==m) las=vt[i][j];
            vt[m+1][j]+=vt[i][j];
        }
        if(mx>las) pos=i;
    }
    if(pos==-1){
        cout<<m<<endl;
        for(int i=1;i<=m;i++) cout<<i<<" ";
        return 0;
    }
    for(int i=1;i<n;i++){
        if(vt[m+1][n]<=vt[m+1][i]){
            cout<<0<<endl;
            return 0;
        }
    }


    return 0;
}
