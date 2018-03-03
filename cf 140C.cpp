#include<bits/stdc++.h>
using namespace std;
#define LL long long
typedef pair<int,LL> pii;
map<LL,int> mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        LL x;
        cin>>x;
        mp[x]++;
    }
    priority_queue<pii> pq;
    for(auto a:mp){
        pq.push(pii(a.second,a.first));
    }
    vector<vector<LL> > ans;
    while(pq.size()>=3){
        vector<pii> tmpv;
        tmpv.push_back(pq.top());
        pq.pop();
        tmpv.push_back(pq.top());
        pq.pop();
        tmpv.push_back(pq.top());
        pq.pop();

        vector<LL> joma;
        for(auto a:tmpv){
            joma.push_back(a.second);
            a.first--;
            if(a.first) pq.push(a);
        }
        sort(joma.rbegin(),joma.rend());
        ans.push_back(joma);
    }
    cout<<ans.size()<<endl;
    for(auto a:ans)
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;

    return 0;
}
