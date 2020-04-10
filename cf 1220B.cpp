#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long arr[n+10][n+10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    long long x=(arr[0][1]*arr[0][2])/(arr[1][2]);
    x=sqrt(x);
    cout<<x<<" ";
    for(int i=1;i<n;i++) cout<<arr[0][i]/x<<" ";

    return 0;
}
