#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;

    cin>>n>>a>>b>>c;
    int res=0;
    if(n==1){
        cout<<0<<endl;
        return 0;
    }
    if(a>b){
        res+=b;
        if(c>b){
            res+=b*(n-2);
        }
        else{
            res+=c*(n-2);
        }
    }
    else{
        res+=a;
        if(a>c){
            res+=c*(n-2);
        }
        else{
            res+=a*(n-2);
        }
    }
    cout<<res<<endl;
    return 0;
}
