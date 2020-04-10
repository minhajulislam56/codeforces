#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,p,w,d;
    cin>>n>>p>>w>>d;
    bool fg=false;
    ll x,y,z;
    for(int i=0;i<w && p>=0;i++){
        if(p%w==0){
            y=i;
            x=p/w;
            fg=true;
        }
        p-=d;
    }
    if(!fg || x+y>n) cout<<-1<<endl;
    else cout<<x<<" "<<y<<" "<<n-(x+y)<<endl;

    return 0;
}
