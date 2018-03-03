#include<bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd(a,b)
bool chk;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tmp=arr[0];
    for(int i=1;i<n;i++){
        tmp=gcd(tmp,arr[i]);
    }
    if(tmp!=arr[0]){
        cout<<-1<<endl;
    }
    else{
        cout<<2*n-1<<endl;
        for(int i=0;i<n-1;i++){
            cout<<arr[i]<<" "<<tmp<<" ";
        }
        cout<<arr[n-1]<<endl;
    }

    return 0;
}

