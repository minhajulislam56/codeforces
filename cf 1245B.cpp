#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n, r, p, s;
        cin>>n>>r>>p>>s;
        string st;
        char ans[n+5];
        cin>>st;
        int mn=n/2, cnt=0;
        if(n%2) mn++;
        for(int i=0;i<n;i++){
            if(st[i]=='R'){
                if(p) cnt++, p--, ans[i]='P';
                else ans[i]='$';
            }
            else if(st[i]=='P'){
                if(s) cnt++, s--, ans[i]='S';
                else ans[i]='$';
            }
            else{
                if(r) cnt++, r--, ans[i]='R';
                else ans[i]='$';
            }
        }
        if(cnt>=mn){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(ans[i]=='$'){
                    if(r) r--, ans[i]='R';
                    else if(p) p--, ans[i]='P';
                    else s--, ans[i]='S';
                }
                cout<<ans[i];
            }
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
