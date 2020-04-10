#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    long long arr[n+5];
    long long mx = -1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(mx<arr[i]) mx=arr[i];
    }

    long long rem[n+5];
    for(int i=0;i<n;i++){
        rem[i]=mx-arr[i];
    }

    long long z=0LL;
    for(int i=0;i<n;i++){
        if(rem[i]==0) continue;
        z=__gcd(z,rem[i]);
    }

    long long y=0LL;
    for(int i=0;i<n;i++){
        y+=(long long)rem[i]/z;
    }

    cout<<y<<" "<<z<<endl;

    return 0;
}
