#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define MAX 60007
int arr[MAX];
int dp[MAX][500];

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        arr[i]=i+1;
    int t1=0, t2=0;
    while(n--){
        if(t1>t2)
            t2+=arr[n];
        else
            t1+=arr[n];
    }
    cout<<abs(t1-t2)<<endl;

    return 0;
}
