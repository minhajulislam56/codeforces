#include<bits/stdc++.h>
using namespace std;
#define LL unsigned long long
int main()
{
    ios_base::sync_with_stdio(false);
    LL n,m, ans;
    cin>>n>>m;
    if(n>30)
        cout<<m<<endl;
    else
        cout<<m%(1<<n)<<endl;

    return 0;
}
