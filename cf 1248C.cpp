#include<bits/stdc++.h>
using namespace std;
long long f[100005];
long long M=1e9+7;
int main()
{
    int n, m;
    cin>>n>>m;
    f[1]=1;
    f[2]=2;

    for(int i=3;i<=max(n,m);i++){
        f[i]=(f[i-1]%M+f[i-2]%M)%M;
    }

    cout<<2*(f[n]+f[m]-1)<<endl;

    return 0;
}
