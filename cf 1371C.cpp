#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        unsigned long long v, c, n, m, r;
        cin>>v>>c>>n>>m;
        bool got=false;
        if(v>c){
            if(c<m) got=true, cout<<"NO"<<endl;
            else c-=m;
        }
        else{
            if(v<m) got=true, cout<<"NO"<<endl;
            else v-=m;
        }
        if(got) continue;
        if(v+c<n) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}


