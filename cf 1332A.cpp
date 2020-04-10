#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int x, y, x1, y1, x2, y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        bool fg=1;
        if(c>d){
            int yd=abs(y-y1);
            if(yd<abs(c-d)) fg=0;
        }
        else if(d>c){
            int yd=abs(y-y2);
            if(yd<abs(c-d)) fg=0;
        }
        else if(c && d && c==d && y1==y2) fg=0;

        if(a>b){
            int xd=abs(x-x1);
            if(xd<abs(a-b)) fg=0;
        }
        else if(b>a){
            int xd=abs(x-x2);
            if(xd<abs(a-b)) fg=0;
        }
        else if(a && b && a==b && x1==x2) fg=0;

        cout<<(fg?"Yes": "No")<<endl;
    }

    return 0;
}
