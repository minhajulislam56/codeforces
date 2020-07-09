#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        map<long long, int> mp;
        mp.clear();
        long long n, k, v=0, ocr=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x%k==0) continue;
            x=x%k;
            x=k-x;
            mp[x]++;
            if(mp[x]>ocr){
                ocr=mp[x];
                v=x;
            }
            else if(mp[x]==ocr && v<x) v=x;
        }
        //cout<<v<<" "<<ocr<<endl;
        if(!ocr) cout<<0<<endl;
        else{
            long long ans=((ocr-1)*k)+v+1;
            cout<<ans<<endl;
        }
    }

    return 0;
}


