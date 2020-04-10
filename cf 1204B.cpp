#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    cin>>n>>l>>r;

    int minn=0, k=n, maxx=0;;
    for(int i=0,j=1;i<l;i++,k--){
        minn+=j;
        j=j*2;
    }
    while(k--) minn++;
    k=n;
    int las;
    for(int i=0,j=1;i<r;i++,k--){
        maxx+=j;
        las=j;
        j=j*2;
    }
    while(k--) maxx+=las;

    cout<<minn<<" "<<maxx<<endl;
    return 0;
}
