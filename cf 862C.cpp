#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;

    cin>>n>>x;

    if(n==1) cout<<"YES"<<endl<<x<<endl;
    else if(n==2){
        if(x==0) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl<<0 <<" "<<x<<endl;
        }
    }
    else{
        cout<<"YES"<<endl;
        int xorr=0;
        for(int i=1;i<n-2;i++){
            xorr=xorr^i;
            cout<<i<<" ";
        }
        cout<<(1<<17)<<" "<<(1<<18)<<" ";
        int result=(1<<17)^(1<<18)^xorr^x;
        cout<<result<<endl;
    }

    return 0;
}
