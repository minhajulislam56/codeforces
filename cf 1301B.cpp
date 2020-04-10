#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int avg=0, mx=-1, fst=-1;
        bool gap=false;
        for(int i=0;i<n;i++){
            if(arr[i]==-1) gap=true;
            if(arr[i]>=0 && fst==-1){
                fst=arr[i];
                continue;
            }
            if(arr[i]>=0 && gap){
                if(fst==-1) fst=arr[i];
                else{
                    int temp=(fst+arr[i])/2;
                    if(avg) avg=(avg+temp)/2;
                    else avg=temp;
                    gap=false;
                    fst=arr[i];
                }
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=-1) mx=max(abs(arr[i]-avg),mx);
        }
        cout<<avg<<" "<<mx<<endl;
    }

    return 0;
}
