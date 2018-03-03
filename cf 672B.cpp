#include<bits/stdc++.h>
using namespace std;
map<char,bool> mp;
int main()
{
    int n;
    string st;
    cin>>n>>st;
    int cnt=0;
    if(n>26){
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0;i<st.size();i++){
        if(mp[st[i]])
            cnt++;
        mp[st[i]]=true;
    }
    cout<<cnt<<endl;

    return 0;
}
