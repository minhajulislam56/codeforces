#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        long long n, x, sum=0;
        cin>>n>>x;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        sort(v.begin(), v.end());

        long long d=sum/n;
        if(d>=x){
            cout<<n<<endl;
        }
        else{
            int ans=-1;
            for(int i=0;i<n-1;i++){
                sum-=v[i];
                d=sum/(long long)(n-i-1);
                if(d>=x){
                    ans=n-i-1;
                    break;
                }
            }
            if(ans==-1){
                if(sum>=x) cout<<1<<endl;
                else cout<<0<<endl;
            }
            else cout<<ans<<endl;
        }
    }

    return 0;
}
