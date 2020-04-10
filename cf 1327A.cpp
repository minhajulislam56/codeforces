#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        long long n, k;
        cin>>n>>k;
        if(k==1){
            if(n%2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        long long lim=1+((k-2)*2), pr=((k-1)*k)-(k-1);;
        n=n-pr;
        if(n>lim && n%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
