#include<bits/stdc++.h>
using namespace std;
bool func(long long x)
{
    return (x & (x - 1)) == 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        long long n;
        cin>>n;
        if(n%2) cout<<2<<endl;
        else{
            if(func(n)) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }

    return 0;
}


