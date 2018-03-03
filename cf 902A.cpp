#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int s=0;
    string ans="YES";
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(s>=x && s<=y)
            s=y;
    }
    if(s!=m) ans="NO";
    cout<<ans<<endl;
    return 0;
}

