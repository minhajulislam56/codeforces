#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string st, st2, ans="";
    cin>>st>>st2;
    char chk=st2[0];
    ans+=st[0];
    for(int i=1;i<st.length();i++){
        if(st[i]<chk)
            ans+=st[i];
        else
            break;
    }
    ans+=chk;
    cout<<ans<<endl;

    return 0;
}
