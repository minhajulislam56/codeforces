#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sx, sy, dx, dy, difx, dify;
    cin>>sx>>sy>>dx>>dy;

    difx=abs(sx-dx)!=0?abs(sx-dx)+1:abs(sx-dx);
    dify=abs(sy-dy)!=0?abs(sy-dy)+1:abs(sy-dy);

    //cout<<difx<<" "<<dify<<endl;

    if(difx==dify){
        cout<<difx*4<<endl;
    }
    else if(difx>dify){
        cout<<(difx*4)-(dify!=0?(difx-dify)*2:(difx-2)*2)<<endl;
    }
    else{
        cout<<(dify*4)-(difx!=0?(dify-difx)*2:(dify-2)*2)<<endl;
    }

    return 0;
}
