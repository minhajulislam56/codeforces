#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
    string s;
    int ans=0,n=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'){
            n=((2*n)+1)%MOD;
        }
        else{
            ans=(ans+n)%MOD;
        }
    }
    cout<<ans<<endl;

    return 0;
}
