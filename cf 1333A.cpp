#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n, m;
        cin>>n>>m;
        char mat[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) mat[i][j]='B';
        }
        mat[n-1][m-1]='W';

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<mat[i][j];
            }
            cout<<endl;
        }

    }

    return 0;
}
