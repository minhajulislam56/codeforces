#include<bits/stdc++.h>
using namespace std;
#define MAX 110
bool f1,f2;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int house[n+5];
    for(int i=1;i<=n;i++){
        cin>>house[i];
    }
    int dis=0;
    for(int i=m;i<=n;i++){
        if(house[i]!=0 && house[i]<=k){
            f1=true;
            break;
        }
        else
            dis++;
    }
    int dis2=0;
    for(int i=m;i>=1;i--){
        if(house[i]!=0 && house[i]<=k){
            f2=true;
            break;
        }
        else
            dis2++;
    }
    int mn;
    if(f1 && f2)
        mn=min(dis,dis2);
    else if(!f1 && f2)
        mn=dis2;
    else
        mn=dis;
    cout<<mn*10<<endl;
    return 0;
}

