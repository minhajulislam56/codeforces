#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        long long x, y, n;
        cin>>x>>y>>n;

        long long d=n/x;
        if(d*x+y>n) d--;
        cout<<d*x+y<<endl;
    }

    return 0;
}

