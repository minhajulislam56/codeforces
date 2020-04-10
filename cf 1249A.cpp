#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        bool fg[n+5]={0};
        int cnt=0, team=0;
        while(cnt<n){
            team++;
            int las=0;
            for(int i=0;i<n;i++){
                if(!fg[i]){
                    if(!las){
                        las=arr[i];
                        fg[i]=true;
                        cnt++;
                    }
                    else if(abs(las-arr[i])>1){
                        las=arr[i];
                        fg[i]=true;
                        cnt++;
                    }
                }
            }
        }
        cout<<team<<endl;
    }

    return 0;
}
