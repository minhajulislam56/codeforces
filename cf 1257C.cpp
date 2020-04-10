#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int ans=n;
        int mk[200005];
        memset(mk,-1,sizeof(mk));
        bool rep=false;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(mk[a]==-1) mk[a]=i;
            else{
                ans=min(ans,i-mk[a]+1);
                mk[a]=i;
                rep=true;
            }
        }
        if(!rep) cout<<-1<<endl;
        else cout<<ans<<endl;
    }

    return 0;
}
