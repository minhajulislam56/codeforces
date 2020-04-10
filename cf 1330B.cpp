#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool mark[200005], a[200005], b[200005];
        memset(mark, false, sizeof mark);
        memset(a, false, sizeof a);
        memset(b, false, sizeof b);
        int mx=-1;
        for(int i=0;i<n;i++){
            if(mark[arr[i]]) break;
            mark[arr[i]]=true;
            mx=max(arr[i], mx);
            if(mx==i+1) a[i]=true;
        }
        memset(mark, false, sizeof mark);
        mx=-1;
        for(int i=n-1, cnt=0;i>=0;i--, cnt++){
            if(mark[arr[i]]) break;
            mark[arr[i]]=true;
            mx=max(arr[i], mx);
            if(mx==cnt+1) b[i]=true;
        }
        vector<pair<int, int>> ans;
        for(int i=0;i<n-1;i++){
            if(a[i] && b[i+1]) ans.push_back({i+1,n-i-1});
        }
        cout<<ans.size()<<endl;
        for(auto i:ans) cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}
