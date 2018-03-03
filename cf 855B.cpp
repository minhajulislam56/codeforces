#include<bits/stdc++.h>
using namespace std;
#define LL long long
//bool mark[2];
int main()
{
    LL n,p,q,r,px,qx,rx,num;
    cin>>n>>p>>q>>r;
    px=qx=rx=LLONG_MIN;
    while(n--){
        cin>>num;
        px=max(px,num*p);
        qx=max(qx,px+(num*q));
        rx=max(rx,qx+(num*r));
    }
    cout<<rx<<endl;

    return 0;
}
