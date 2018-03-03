#include<bits/stdc++.h>
using namespace std;
#define MAX 5010
int visited[MAX];
int main()
{
    int low[MAX];
    int n, m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        low[i]=1<<28;
    }
    int t[MAX], l[MAX], r[MAX], d[MAX];
    for(int i=0;i<m;i++){
        cin>>t[i]>>l[i]>>r[i]>>d[i];
    }
    for(int i=0;i<m;i++){
        if(t[i]==1){
            for(int j=l[i];j<r[i];j++){
                low[j]+=d[i];
            }
        }
        else{
            for(int j=l[i];j<=r[i];j++){
                low[j]=min(low[j], d[i]);
            }
        }
    }
    bool b;
    for(int i=m-1;i>=0;i--){
        if(t[i]==1){
            for(int j=l[i];j<r[i];j++){
                low[j]-=d[i];
            }
        }
        else{
            b=0;
            for(int j=l[i];j<r[i];j++){
                if(low[j]==d[j]){
                    b=1;
                    visited[j]=1;
                    break;
                }
            }
            if(b==0){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<low[i]<<" ";
    }
    cout<<endl;

    return 0;
}
