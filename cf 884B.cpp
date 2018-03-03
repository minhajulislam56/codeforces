#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, n, sum=0, in;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>in;
        sum+=in;
    }

    sum+=n-1;
    (sum==x)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    return 0;
}
