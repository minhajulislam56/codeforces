#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a,b;
    cin>>n>>a>>b;
    if(n==a+b){
        cout<<1<<endl;
        return 0;
    }
    int ans=-1;
    for(int i=1;i<n;i++){
        int x=min(a/i, b/(n-i));
        ans=max(ans,x);
    }
    cout<<ans<<endl;

    return 0;
}
