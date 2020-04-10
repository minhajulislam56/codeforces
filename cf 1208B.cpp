#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];

    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=0;
    for(int i=0;i<n;i++){
        unordered_map<int, int> sav;
        int cnt=0;
        for(int j=0;j<i;j++){
            if(sav.count(arr[j])) break;
            cnt++;
            sav[arr[j]]++;
        }
        for(int j=n-1;j>=i;j--){
            if(sav.count(arr[j])) break;
            cnt++;
            sav[arr[j]]++;
        }
        ans=max(ans,cnt);
    }

    cout<<n-ans<<endl;

    return 0;
}
