#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        long long n;
        cin>>n;
        int cnt=0;
        bool fg=false;
        while(n>1){
            if(n%6 && fg) break;
            if(n%6!=0) n=n*2, fg=true;
            else n=n/6, fg=false;
            cnt++;
        }
        if(n==1) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}


