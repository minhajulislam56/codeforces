#include<bits/stdc++.h>
using namespace std;
bool mark[100007];
int main()
{
    ios_base::sync_with_stdio(false);
    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    if(a%b==0){
        if(c==0) ans=1;
        else ans=-1;
        cout<<ans<<endl;
        return 0;
    }
    a=a%b;
    mark[a]=1;
    while(a){
        a=a*10;
        int k=a/b;
        ans++;
        if(k==c)
            break;
        a=a%b;
        if(mark[a]){
            ans=-1;
            break;
        }
        mark[a]=1;
    }
    if(!a){
        if(!c) ans++;
        else ans=-1;
    }
    cout<<ans<<endl;

    return 0;
}
