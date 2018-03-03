#include<bits/stdc++.h>
using namespace std;
map<string,string> mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    string name[n+5], ip[n+5], fname[m+5],fip[m+5];
    for(int i=0;i<n;i++){
        cin>>name[i]>>ip[i];
        ip[i].push_back(';');
        mp[ip[i]]=name[i];
    }
    for(int i=0;i<m;i++)
        cin>>fname[i]>>fip[i];

    for(int i=0;i<m;i++){
        cout<<fname[i]<<" "<<fip[i]<<" #"<<mp[fip[i]]<<endl;
    }

    return 0;
}
