#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,x, ans=0;
    cin>>n;
    x=n;
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    if(n%2) n=(n/2)+1;
    else n=n/2;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    if(x%2) ans=ans*2-n;
    else ans=ans*2;
    cout<<ans<<endl;
    return 0;
}
