#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n, mx=0, mxv, un=0;
        cin>>n;
        int num[n+5];
        memset(num, 0, sizeof num);
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(!num[v[i]]) un++;
            num[v[i]]++;
            if(mx<num[v[i]]){
                mx=num[v[i]];
                mxv=v[i];
            }
        }
        un-=1;
        if(mx>un){
            mx--;
            un++;
        }
        cout<<min(mx, un)<<endl;
    }

    return 0;
}
