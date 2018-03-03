#include<bits/stdc++.h>
using namespace std;
int mat[110][110];
int main()
{
    int n,m,k;

    cin>>n>>m>>k;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>mat[i][j];
        }
    }
    int reslt=0,tdel=0,curr,del,fdel=0,sav; //fdel=0 Baal Amar

    for(int j=1;j<=m;j++){
        curr=0;
        del=0;
        for(int i=1;i<=n;i++){

            if(mat[i][j]==1){
                sav=0;
                for(int p=i;p<i+min(k,n-i+1) && p<=n;p++){
                    if(mat[p][j]==1){
                        sav++;
                    }
                }
                if(sav>curr){
                    curr=sav;
                    fdel=del;
                }
                del++;
            }
        }
        //cout<<curr<<" "<<fdel<<endl;
        reslt+=curr;
        tdel+=fdel;
    }

    cout<<reslt<<" "<<tdel<<endl;

    return 0;
}
