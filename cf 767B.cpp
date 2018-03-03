#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL ts,tf,t;
    cin>>ts>>tf>>t;
    int n;
    cin>>n;
    LL arr[n+5];
    for(int i=0;i<n;i++) cin>>arr[i];
    if(!n || arr[0]>ts){
        cout<<ts<<endl;
        return 0;
    }
    arr[n]=tf-t+1;
    LL ans,curr,wait;
    ans=arr[0]-1;
    wait=ts-(arr[0]-1);
    curr=ts+t;
    for(int i=1;i<=n;i++){
        if(curr>tf-t) break;

        if(arr[i]-1>=curr){
            ans=arr[i]-1;
            break;
        }
        if(curr-(arr[i]-1)<wait){
            wait=curr-(arr[i]-1);
            ans=arr[i]-1;
        }
        curr+=t;
    }
    cout<<ans<<endl;
    return 0;
}
