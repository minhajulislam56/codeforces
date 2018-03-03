#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    string st="";
    int mat[n+5][n+5];
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        st+=ch;
    }

    for(int i=0;i<=n;i++){
        mat[n-1][i]=1;
    }
    for(int i=n-2;i>=0;i--){
        LL sum=0;
        for(int j=0;j<=n;j++){
            sum=(sum+mat[i+1][j])%mod;
            if(st[i]=='s')
                mat[i][j]=sum;
            else
                mat[i][j]=mat[i+1][j+1];
        }
    }
    cout<<mat[0][0]<<endl;
    return 0;
}
