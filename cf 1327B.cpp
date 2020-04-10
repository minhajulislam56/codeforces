#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n, cnt=0, idx=-1;
        cin>>n;
        bool taken[n+5];
        memset(taken, false, sizeof taken);
        for(int i=0;i<n;i++){
            int k;
            bool fg=false;
            cin>>k;
            for(int j=0;j<k;j++){
                int a;
                cin>>a;
                if(fg) continue;
                if(!taken[a]){
                    taken[a]=true;
                    cnt++;
                    fg=true;
                }
            }
            if(!fg && idx==-1) idx=i+1;
        }
        if(cnt<n){
            for(int i=1;i<=n;i++){
                if(!taken[i]){
                    cout<<"IMPROVE"<<endl<<idx<<" "<<i<<endl;
                    break;
                }
            }
        }
        else cout<<"OPTIMAL"<<endl;
    }

    return 0;
}
