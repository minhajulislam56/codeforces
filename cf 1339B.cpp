#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<long long> v(n),p;
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(), v.end());
        for(int i=0, j=n-1;i<=j;i++, j--){
            if(i==j) p.push_back(v[i]);
            else{
                p.push_back(v[j]);
                p.push_back(v[i]);
            }
        }
        for(int i=n-1;i>=0;i--) cout<<p[i]<<" ";
        cout<<endl;
    }

    return 0;
}
