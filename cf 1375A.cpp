#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<0) arr[i]*=-1;
        }
        for(int i=1;i<n;i++){
            if(i<=n/2){
                if(arr[i]-arr[i-1]<0) arr[i-1]*=-1;
            }
            else{
                if(arr[i]-arr[i-1]>0) arr[i]*=-1;
            }
        }
        for(auto i:arr) cout<<i<<" ";
        cout<<endl;
        int pos=0, neg=0;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]<0) neg++;
            else pos++;
        }
        cout<<pos<<" "<<neg<<endl;
    }

    return 0;
}


