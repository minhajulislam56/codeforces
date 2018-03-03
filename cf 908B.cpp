#include<bits/stdc++.h>
using namespace std;
int xx[]={-1,1,0,0};
int yy[]={0,0,1,-1};
int p[4]={0,1,2,3};
int main()
{
    ios_base::sync_with_stdio(false);
    int m,n;
    cin>>m>>n;
    char mat[m+5][n+5];
    int stx, sty;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>mat[i][j];
            if(mat[i][j]=='S')
                stx=i,sty=j;
        }
    }
    string dir;
    cin>>dir;
    int cnt=0, len=dir.length();
    do{
        int tx=stx, ty=sty;
        for(int i=0;i<len;i++){
            int tmp=p[dir[i]-'0'];
            tx+=xx[tmp], ty+=yy[tmp];
            if(tx<1 || tx>m || ty<1 || ty>n || mat[tx][ty]=='#')
                break;
            if(mat[tx][ty]=='E'){
                cnt++;
                break;
            }
        }
    }
    while(next_permutation(p,p+4));
    cout<<cnt<<endl;

    return 0;
}
