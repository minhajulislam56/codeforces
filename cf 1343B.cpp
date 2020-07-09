#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n, x;
        cin>>n;
        x=n/2;
        if(x%2) cout<<"NO"<<endl;
        else{
            int arr[n+5], evs=0, ods=0;
            for(int i=0, v=2;i<x-1;i++, v+=2){
                arr[i]=v, evs+=v;
                arr[i+x]=v-1, ods+=v-1;
            }
            int diff=evs-ods;
            arr[x-1]=arr[x-2]+2;
            arr[n-1]=arr[x-1]+diff;
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++) cout<<arr[i]<<" ";
            cout<<endl;
        }
    }

    return 0;
}

