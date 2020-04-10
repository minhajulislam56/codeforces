#include<bits/stdc++.h>
using namespace std;
int tmm[105];
int main()
{
    int n, q;
    cin>>n>>q;
    while(q--){
        int t, d, k;
        cin>>t>>d>>k;
        int rs=d;
        for(int i=1;i<=n && rs;i++){
            if(tmm[i]<=t){
                rs--;
                tmm[i]=0;
            }
        }
        if(rs) cout<<-1<<endl;
        else{
            int sum=0;
            for(int i=1;i<=n && d;i++){
                if(!tmm[i]){
                    sum+=i;
                    tmm[i]=t+k;
                    d--;
                }
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}
