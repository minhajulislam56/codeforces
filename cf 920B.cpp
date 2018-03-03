#include<bits/stdc++.h>
using namespace std;
#define MAX 1007
bool fg[5007];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        memset(fg,false,sizeof fg);
        int ans[n+5];
        for(int i=0;i<n;i++){
            int l,r;
            cin>>l>>r;
            int j=l;
            for(;j<=r;j++){
                if(!fg[j]){
                    fg[j]=true;
                    ans[i]=j;
                    break;
                }
            }
            if(j>r) ans[i]=0;
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }

    return 0;
}
