#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string st;
    cin>>n>>st;
    string ans="";
    ans+=st[0];
    for(int i=1,j=0;i<st.length();i++){
        if((st[i]=='a' ||st[i]=='e' ||st[i]=='i' ||st[i]=='o' ||st[i]=='u' || st[i]=='y')&& ((ans[j]=='a' ||ans[j]=='e' ||ans[j]=='i' ||ans[j]=='o' ||ans[j]=='u' || ans[j]=='y'))){
            continue;
        }
        else{
            ans+=st[i];
            j++;
        }
    }
    cout<<ans<<endl;

    return 0;
}
