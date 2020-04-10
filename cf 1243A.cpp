#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];
        sort(vec.begin(), vec.end());
        int ans=0;
        for(int i=0;i<n;i++){
            if(vec[i]>ans && n-i>=ans) ans=min(vec[i],n-i);
        }
        cout<<ans<<endl;
    }

    return 0;
}
