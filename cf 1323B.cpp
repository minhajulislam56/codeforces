#include<bits/stdc++.h>
using namespace std;
int res[400][400];
int main()
{
    int n, m, k;
    cin>>n>>m>>k;
    int a[n+5], b[n+5];

    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>b[i];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            res[i][j]=a[i]*b[j];
        }
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    int len=0, row=0, col=0, ans=0;
    for(int i=1;i<=m;i++){
        if(!b[i]){
            if(len>=k) row+=len-k+1;
            len=0;
        }
        else len++;
    }
    if(len){
        if(len>=k) row+=len-k+1;
        len=0;
    }
    for(int i=1;i<=n;i++){
        if(a[i]) ans+=row;
    }

    for(int i=1;i<=n;i++){
        if(!a[i]){
            if(len>=k) col+=len-k+1;
            len=0;
        }
        else len++;
    }
    if(len){
        if(len>=k) col+=len-k+1;
        len=0;
    }
    for(int i=1;i<=m;i++){
        if(b[i]) ans+=col;
    }
    cout<<ans<<endl;

    return 0;
}
