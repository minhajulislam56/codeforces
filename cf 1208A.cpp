#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        cout<<(n%3==0?a:n%3==1?b:a^b)<<endl;
    }

    return 0;
}
