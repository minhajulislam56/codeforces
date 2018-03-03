#include<bits/stdc++.h>
using namespace std;
bool mark[55];
int main()
{
    ios_base::sync_with_stdio(false);
    int a[4], cnt;
    cin>>a[0]>>a[1]>>a[2];
    int mat[25][25];
    memset(mark,false,sizeof mark);
    mat[0][0]=1, mat[0][1]=2, mat[0][2]=3;
    mark[1]=mark[2]=mark[3]=true;
    cnt=3;
    for(int i=1;i<=20;i++){
        for(int j=0;j<3;j++){
            mat[i][j]=i*a[j]+mat[0][j];
            if(mark[mat[i][j]]==false && mat[i][j]<=20){
                cnt++;
                mark[mat[i][j]]=true;
            }
        }
    }
    if(cnt==20){
        cout<<"YES"<<endl;
        return 0;
    }

    memset(mark,false,sizeof mark);
    mat[0][0]=2, mat[0][1]=1, mat[0][2]=3;
    mark[1]=mark[2]=mark[3]=true;
    cnt=3;
    for(int i=1;i<=20;i++){
        for(int j=0;j<3;j++){
            mat[i][j]=i*a[j]+mat[0][j];
            if(mark[mat[i][j]]==false && mat[i][j]<=20){
                cnt++;
                mark[mat[i][j]]=true;
            }
        }
    }
    if(cnt==20){
        cout<<"YES"<<endl;
        return 0;
    }

    memset(mark,false,sizeof mark);
    mat[0][0]=3, mat[0][1]=2, mat[0][2]=1;
    mark[1]=mark[2]=mark[3]=true;
    cnt=3;
    for(int i=1;i<=20;i++){
        for(int j=0;j<3;j++){
            mat[i][j]=i*a[j]+mat[0][j];
            if(mark[mat[i][j]]==false && mat[i][j]<=20){
                cnt++;
                mark[mat[i][j]]=true;
            }
        }
    }
    if(cnt==20){
        cout<<"YES"<<endl;
        return 0;
    }

    memset(mark,false,sizeof mark);
    mat[0][0]=1, mat[0][1]=3, mat[0][2]=2;
    mark[1]=mark[2]=mark[3]=true;
    cnt=3;
    for(int i=1;i<=20;i++){
        for(int j=0;j<3;j++){
            mat[i][j]=i*a[j]+mat[0][j];
            if(mark[mat[i][j]]==false && mat[i][j]<=20){
                cnt++;
                mark[mat[i][j]]=true;
            }
        }
    }
    if(cnt==20){
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;

    return 0;
}
