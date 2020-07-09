#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n, ans=1;
        cin>>n;
        if(n%2) n--;
        cout<<n/2<<endl;
    }

    return 0;
}


