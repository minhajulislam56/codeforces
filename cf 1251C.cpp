#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        string st, ans="";
        cin>>st;
        queue<char> ev,od;
        for(int i=0;i<st.size();i++){
            if((st[i]-'0')&1) od.push(st[i]);
            else ev.push(st[i]);
        }

        while(!ev.empty() && !od.empty()){
            if(ev.front()<od.front()){
                ans+=ev.front();
                ev.pop();
            }
            else{
                ans+=od.front();
                od.pop();
            }
        }
        while(!ev.empty()){
            ans+=ev.front();
            ev.pop();
        }
        while(!od.empty()){
            ans+=od.front();
            od.pop();
        }
        cout<<ans<<endl;
    }

    return 0;
}
