#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        long long x, y, a, b;
        cin>>x>>y>>a>>b;

        cout<<min(((min(x,y)*b)+(abs(x-y)*a)), a*(x+y))<<endl;

    }

    return 0;
}
