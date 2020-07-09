#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n, k;
        cin>>n>>k;
        long long a[n+5], sum=0;
        int w[k+5];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<k;i++) cin>>w[i];
        sort(a, a+n);
        sort(w, w+k);
        for(int i=0, l=n-1;i<k;i++, l--){
            if(w[i]==1) sum+=a[l]*(2*1ll);
            else sum+=a[l];
        }
        for(int i=k-1, j=0;i>=0;i--){
            if(w[i]==1) continue;
            sum+=a[j];
            j+=w[i]-1;
        }
        cout<<sum<<endl;
    }

    return 0;
}

