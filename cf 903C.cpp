#include<bits/stdc++.h>
using namespace std;
#define LL long long
map<LL,int> mark;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int ans=0;
    while(n--){
        LL x;
        cin>>x;
        mark[x]++;
        ans=max(ans,mark[x]);
    }
    cout<<ans<<endl;
    return 0;
}


