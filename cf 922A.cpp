#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL x,y;
    while(cin>>x>>y){
        string ans="Yes";
        if((y==1||y==0) && x>0)
            ans="No";
        else if(y-1>x)
            ans="No";
        else if((x-(y-1))%2){
            ans="No";
        }

        cout<<ans<<endl;
    }

    return 0;
}
