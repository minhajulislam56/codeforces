#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int on=0, tw=0;
    while(n--){
        int x;
        cin>>x;
        (x==1)?on++:tw++;
    }
    int ans=0;
    if(tw>=on){
        ans=on;
    }
    else{
        ans+=tw;
        on-=tw;
        ans+=(int)on/3;
    }
    cout<<ans<<endl;
    return 0;
}
