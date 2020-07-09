#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("sort.in", "r", stdin);
    freopen("output.in", "w", stdout);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(), v.end());
    for(auto i:v) cout<<i<<" ";

    return 0;
}
