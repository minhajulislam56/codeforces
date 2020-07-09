#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        int z=0, o=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0') z++;
            else o++;
        }
        int val=min(z, o);
        if(val%2) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }

    return 0;
}
