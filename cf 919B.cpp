#include<bits/stdc++.h>
using namespace std;
bool check(long long x)
{
    int sum=0;
    while(x){
        sum+=x%10;
        x/=10;
    }
    return sum==10?true:false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,i=0;
    cin>>k;
    long long ans=10;
    while(i<k){
        ans+=9;
        if(check(ans)) i++;
    }
    cout<<ans<<endl;
    return 0;
}
