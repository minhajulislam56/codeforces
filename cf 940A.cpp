#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<n;i++){
        int cnt=1;
        for(int j=i+1;j<n;j++){
            if(v[j]<=v[i]+k) cnt++;
            else
                break;
        }
        ans=max(ans,cnt);
    }
    cout<<n-ans<<endl;

    return 0;
}
