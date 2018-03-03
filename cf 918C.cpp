#include<bits/stdc++.h>
using namespace std;
map<string,bool> mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string st;
    cin>>st;
    int ans=0;

    for(int i=0;i<st.length();i++){
        int fi=0,les=0;
        for(int j=i;j<st.length();j++){
            if(st[j]=='(')
                fi++,les++;
            else if(st[j]==')')
                fi--,les--;
            else
                fi++,les--;

            if(fi<0) break;
            if(les<0) les=1;
            if(!les) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
