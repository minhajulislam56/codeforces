#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n, l, r;
        cin>>n;
        vector<int> p(n), ans;
        for(int i=0;i<n;i++) cin>>p[i];
        ans.push_back(p[0]);
        for(int i=1;i<n-1;i++){
            if(p[i]<p[i-1] && p[i]<p[i+1]) ans.push_back(p[i]);
            if(p[i]>p[i-1] && p[i]>p[i+1]) ans.push_back(p[i]);
        }
        ans.push_back(p[n-1]);
        cout<<ans.size()<<endl;
        for(auto i:ans) cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}


