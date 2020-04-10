#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int mark[n+5][2], a[n+5];
        memset(mark, 0, sizeof mark);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0) mark[i][0]++;
            else if(a[i]<0) mark[i][1]++;
            if(i){
                mark[i][0]+=mark[i-1][0];
                mark[i][1]+=mark[i-1][1];
            }
        }
        bool fg=true;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            if(!i){
                if(a[i]!=k) fg=false;
            }
            else{
                if(a[i]<k){
                    if(!mark[i-1][0]) fg=false;
                }
                else if(a[i]>k){
                    if(!mark[i-1][1]) fg=false;
                }
            }
        }
        if(fg) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
