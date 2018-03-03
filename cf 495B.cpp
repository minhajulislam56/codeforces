#include<bits/stdc++.h>
using namespace std;
#define LL long long
map<LL,bool> f;
int main()
{
    ios_base::sync_with_stdio(false);
    LL a,b, cnt=0;
    cin>>a>>b;
    LL n=a-b;
    bool mark=false;
    if(n){
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0 && i>b && !f[i])
                cnt++, f[i]=1;
            if(n%i==0 && n/i>b && !f[n/i])
                cnt++, f[n/i]=1;
        }
        mark=1;
    }
    if(mark){
        cout<<cnt<<endl;
    }
    else
        cout<<"infinity"<<endl;

    return 0;
}
