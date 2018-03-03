#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;

    cin>>n>>k>>x;

    int t,total=0;
    for(int i=0;i<n-k;i++){
        cin>>t;
        total+=t;
    }
    total+=k*x;
    cout<<total<<endl;

    return 0;
}
