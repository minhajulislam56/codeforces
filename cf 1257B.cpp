#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        long long x,y;
        cin>>x>>y;
        int cnt=1000;
        bool f=true;
        while(cnt--){
            if(y<=x && x>0){
                cout<<"YES"<<endl;
                f=false;
                break;
            }
            if(x%2==0) x=(x*3ll)/2ll;
            else x--;
        }
        if(f) cout<<"NO"<<endl;
    }

    return 0;
}
