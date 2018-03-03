#include<bits/stdc++.h>
using namespace std;
int mat[101][101];
int main()
{
    int n,k;
    cin>>n>>k;
    if(n*n<k){
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0;i<n && k>0;i++){
        mat[i][i]=1 && k--;
        for(int j=i+1;j<n && k>1;j++){
            mat[i][j]=mat[j][i]=1;
            k-=2;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
