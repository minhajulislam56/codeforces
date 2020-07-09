#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n, x, sum=0;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i], sum+=a[i];
        if(sum%x){
            cout<<n<<endl;
            continue;
        }
        int l=0, r=0;
        for(int i=0;i<n;i++, l++){
            if(a[i]%x) break;
        }
        for(int i=n-1;i>=0;i--, r++){
            if(a[i]%x) break;
        }
        if(l+r==n*2) cout<<-1<<endl;
        else cout<<max(n-l, n-r)-1<<endl;
    }

    return 0;
}


