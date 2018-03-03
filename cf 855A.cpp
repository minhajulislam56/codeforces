#include<bits/stdc++.h>
using namespace std;
map<string,bool>mp;
int main()
{
    int n,cnt=0;
    string p;
    cin>>n;
    while(n--){
        cin>>p;
        if(!mp[p]){
            cout<<"NO"<<endl;
            mp[p]=true;
            continue;
        }
        cout<<"YES"<<endl;
    }

    return 0;
}
