#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    cout<<'?'<<" "<<1<<" "<<2<<endl;
    fflush(stdout);
    cin>>arr[1];
    cout<<'?'<<" "<<1<<" "<<3<<endl;
    fflush(stdout);
    cin>>arr[3];
    cout<<'?'<<" "<<2<<" "<<3<<endl;
    fflush(stdout);
    cin>>arr[2];

    int temp=(arr[1]+arr[2]-arr[3])/2;
    arr[2]=temp;
    arr[1]=arr[1]-temp;
    arr[3]=arr[3]-arr[1];

    for(int i=4;i<=n;i++){
        cout<<'?'<<" "<<2<<" "<<i<<endl;
        fflush(stdout);
        cin>>arr[i];
        arr[i]=arr[i]-arr[2];
    }
    cout<<"! ";
    fflush(stdout);
    for(int i=1;i<=n;i++){
        cout<<abs(arr[i])<<" ";
        fflush(stdout);
    }
    return 0;
}
