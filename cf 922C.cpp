#include<bits/stdc++.h>
using namespace std;
#define ULL unsigned long long
map<ULL,bool> mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ULL n,k;
    cin>>n>>k;

    for(int i=1;i<=k;i++){
        if(!mp[n%i])
            mp[n%i]=true;
        else{
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}
