#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        long long n, base=2, value=3;
        cin>>n;
        while(true){
            if(n%(value)==0){
                cout<<n/(value)<<endl;
                break;
            }
            base=base*2;
            value+=base;
        }
    }

    return 0;
}
