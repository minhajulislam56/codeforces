#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<ll> v(n), mx(n), mn(n);
        for(int i=0;i<n;i++) cin>>v[i];

        mx[0]=v[0];
        for(int i=1;i<n;i++){
            mx[i]=max(mx[i-1], v[i]);
        }
        mn[n-1]=v[n-1];
        for(int j=n-2;j>=0;j--){
            mn[j]=min(mn[j+1], v[j]);
        }
        ll diff=0, cnt=0;
        for(int i=0;i<n-1;i++){
            diff=max(diff, mx[i]-mn[i+1]);
        }
        while(diff){
            diff/=2ll;
            cnt++;
        }
        cout<<cnt<<endl;
    }


    return 0;
}
