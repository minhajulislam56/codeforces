#include<bits/stdc++.h>
using namespace std;
#define MAX 2007
int row[MAX][MAX], col[MAX][MAX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,kp,ans=0;
    char ch;
    cin>>n>>m>>kp;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>ch;
            if(ch=='*')
                row[i][j]=col[i][j]=0;
            else{
                row[i][j]=row[i-1][j]+1;
                col[i][j]=col[i][j-1]+1;
            }
            if(row[i][j]>=kp) ans++;
            if(col[i][j]>=kp) ans++;
        }
    }
    kp==1?cout<<ans/2<<endl:cout<<ans<<endl;

    return 0;
}
