#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        long long n, x;
        cin>>n;
        x=n/2ll;
        if(n-x>x) cout<<x<<endl;
        else cout<<x-1<<endl;
    }

    return 0;
}
