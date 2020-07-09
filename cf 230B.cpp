#include<bits/stdc++.h>
using namespace std;
bool T_prime(long long x)
{
    if(x==1) return false;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long x, xx;
        cin>>x;
        xx=sqrt(x);
        if(xx*xx != x) cout<<"NO"<<endl;
        else cout<<(T_prime(xx)?"YES":"NO")<<endl;
    }

    return 0;
}


