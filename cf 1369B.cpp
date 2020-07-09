#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n, fp=-1, lp=-1;
        string st;
        cin>>n>>st;
        for(int i=0;i<n;i++){
            if(st[i]=='1' && fp==-1) fp=i;
            if(st[i]=='0' && fp!=-1) lp=i;
        }
        if(fp==-1 || lp==-1) cout<<st<<endl;
        else{
            for(int i=0;i<n;i++){
                if(i==lp) cout<<'0';
                if(i>=fp && i<=lp) continue;
                cout<<st[i];
            }
            cout<<endl;
        }
    }

    return 0;
}

