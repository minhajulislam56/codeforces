#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n, ply, clr;
        bool fg=true;
        cin>>n;
        for(int i=0;i<n;i++){
            int x, y;
            cin>>x>>y;
            if(!fg) continue;
            if(y>x){
                fg=false;
            }
            if(i==0) ply=x, clr=y;
            else{
                if(ply>x || clr>y || (ply==x && y>clr)){
                    fg=false;
                }
            }
            ply=x, clr=y;
        }
        cout<<(fg?"YES":"NO")<<endl;
    }

    return 0;
}
