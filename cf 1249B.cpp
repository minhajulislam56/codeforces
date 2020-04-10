#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int arr[n+5], ans[n+5];
        for(int i=1;i<=n;i++) cin>>arr[i];
        bool fg[n+5];
        memset(fg, false, sizeof fg);
        for(int i=1;i<=n;i++){
            if(!fg[i]){
                vector<int> nw;
                while(!fg[i]){
                    nw.push_back(i);
                    fg[i]=true;
                    i=arr[i];
                }
                for(auto k:nw) ans[k]=nw.size();
            }
        }
        for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }

    return 0;
}
