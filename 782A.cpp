#include<bits/stdc++.h>
using namespace std;
int check[100005];
int main()
{
    int n,socks,maxx=0,ans=0;

    cin>>n;
    n=n*2;
    while(n--){
        cin>>socks;
        if(check[socks]==0){
            maxx++;
            check[socks]=1;
            ans=max(ans, maxx);
        }
        else{
            check[socks]=0;
            maxx--;
        }
    }
    cout<<max(maxx,ans)<<endl;

    return 0;
}
