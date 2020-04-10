#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[20], y[20];

    for(int i=1;i<=6;i++){
        cin>>x[i]>>y[i];
    }

    if(x[3]<=x[1] && x[4]>=x[2]){
        if(y[1]>=y[3]) y[1]=max(y[1], y[4]);
        if(y[2]<=y[4]) y[2]=min(y[2], y[3]);
    }

    if(y[1]>=y[3] && y[2]<=y[4]){
        if(x[1]>=x[3]) x[1]=max(x[1],x[4]);
        if(x[2]<=x[4]) x[2]=min(x[2],x[3]);
    }
    //cout<<x[1]<<" "<<y[1]<<" "<<x[2]<<" "<<y[2]<<endl;
    if(x[5]<=x[1] && x[6]>=x[2]){
        if(y[1]>=y[5]) y[1]=max(y[1], y[6]);
        if(y[2]<=y[6]) y[2]=min(y[2], y[5]);
    }
    if(y[1]>=y[5] && y[2]<=y[6]){
        if(x[1]>=x[5]) x[1]=max(x[1],x[6]);
        if(x[2]<=x[6]) x[2]=min(x[2],x[5]);
    }
    //cout<<x[1]<<" "<<y[1]<<" "<<x[2]<<" "<<y[2]<<endl;
    if(x[1]>=x[2] && y[1]>=y[2]) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
