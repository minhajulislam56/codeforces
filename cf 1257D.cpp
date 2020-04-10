#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
bool cus(pii a, pii b)
{
    return a.first<b.first;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> dun(n);
        for(int i=0;i<n;i++) cin>>dun[i];
        int m;
        cin>>m;
        vector<pair<int,int> > hr;
        for(int i=0;i<m;i++){
            int pi, si;
            cin>>pi>>si;
            hr.push_back({pi,si});
        }
        sort(hr.begin(), hr.end(), cus);

    }

    return 0;
}
