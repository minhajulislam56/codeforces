#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n,R,r;
    cin>>n>>R>>r;

    if(n==1){
        if(r<=R)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else{
        double tmp=(R-r)*sin(pi/n)+1e-7;
        if(tmp<r)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
