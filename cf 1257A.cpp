#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n,k,a,b;
        cin>>n>>k>>a>>b;
        if(a>b) swap(a,b);
        int dis=(a-1)+(n-b);
        int ans=(b-a);
        cout<<ans+min(k,dis)<<endl;
    }

    return 0;
}
