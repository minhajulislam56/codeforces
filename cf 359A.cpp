#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int ans=4, mat[n+5][m+5];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1 && (i==1 || j==1 || i==n || j==m))
                ans=2;
        }
    }
    cout<<ans<<endl;
    return 0;
}
