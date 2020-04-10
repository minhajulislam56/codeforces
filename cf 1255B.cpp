#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> vt;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vt.push_back({x,i+1});
        }
        if(n==2 || m<n) cout<<-1<<endl;
        else{
            sort(vt.begin(), vt.end());
            int cost=0;
            for(int i=0;i<n-1;i++) cost+=vt[i].first+vt[i+1].first;
            cost+=vt[n-1].first+vt[0].first;
            for(int i=0;i<m-n;i++) cost+=vt[0].first+vt[1].first;
            cout<<cost<<endl;
            for(int i=0;i<n-1;i++) cout<<vt[i].second<<" "<<vt[i+1].second<<endl;
            cout<<vt[n-1].second<<" "<<vt[0].second<<endl;
            for(int i=0;i<m-n;i++) cout<<vt[0].second<<" "<<vt[1].second<<endl;
        }
    }

    return 0;
}
