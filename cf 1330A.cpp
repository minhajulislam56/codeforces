#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n, x;
        cin>>n>>x;
        bool mark[205]={0};
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mark[a]=true;
        }
        int ans=1;
        while(x){
            if(!mark[ans]) x--;
            ans++;
        }
        if(!mark[ans]) ans--;
        if(mark[ans]){
            while(mark[ans]) ans++;
            ans--;
        }
        cout<<ans<<endl;
    }

    return 0;
}
