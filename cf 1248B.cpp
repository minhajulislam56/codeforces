#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.rbegin(),v.rend());

    long long x=0, y=0;
    bool fg=true;
    for(int i=0,j=n-1;i<=j;){
        if(fg) x+=v[i++], fg=!fg;
        else y+=v[j--], fg=!fg;
    }
    cout<<(x*x)+(y*y)<<endl;
    return 0;
}
