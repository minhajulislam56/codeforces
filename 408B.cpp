#include<bits/stdc++.h>
using namespace std;
#define LL long long
map <LL,bool> hole;
bool drop;
int main()
{
    int n,m,k;
    scanf("%d%d%d", &n,&m,&k);
    for(int i=0;i<m;i++){
        int h;
        scanf("%d",&h);
        hole[h]=true;
    }
    int pos=1;
    while(k--){
        int u,v;
        scanf("%d%d",&u,&v);
        if(u==pos){
            if(hole[u]){
                pos=u;
                drop=true;
            }
            else if(hole[v] && !drop){
                pos=v;
                drop=true;
            }
            else if (!hole[v] && !drop)
                pos=v;
        }
        else if(v==pos){
            if(hole[v]){
                pos=v;
                drop=true;
            }
            else if(hole[u] && !drop){
                pos=u;
                drop=true;
            }
            else if (!hole[u] && !drop)
                pos=u;
        }
    }
    cout<<pos<<endl;

    return 0;
}
