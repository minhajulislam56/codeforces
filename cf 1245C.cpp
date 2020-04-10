#include<bits/stdc++.h>
using namespace std;
long long M = 1e9+7;
long long fib[100005];
void gen()
{
    fib[1]=1;
    fib[2]=2;
    for(int i=3;i<100001;i++){
        fib[i]=(fib[i-1]+fib[i-2])%M;
    }
}
int main()
{
    string s;
    cin>>s;
    if(s[0]=='m' || s[0]=='w') cout<<0<<endl,exit(0);
    gen();
    long long ans=1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='m' || s[i]=='w') cout<<0<<endl,exit(0);
        if((s[i]=='n' && s[i+1]==s[i])||(s[i]=='u' && s[i+1]==s[i])){
            int cnt=2,j=i+2;
            while(s[j]==s[j-1]){
                cnt++;
                j++;
            }
            ans=(ans*fib[cnt])%M;
            i=j-1;

        }
    }

    cout<<ans<<endl;

    return 0;
}
