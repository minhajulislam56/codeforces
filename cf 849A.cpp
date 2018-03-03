#include<bits/stdc++.h>
using namespace std;
bool mark;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
        mark=true;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if((t%2==0 && i==0) ||(t%2==0 && i==n-1))
            mark=true;
    }
    mark?cout<<"NO"<<endl:cout<<"YES"<<endl;

    return 0;
}
