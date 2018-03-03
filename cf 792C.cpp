#include<bits/stdc++.h>
using namespace std;
int store[15];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string st;
    cin>>st;

    int sum=0;
    for(int i=0;i<st.length();i++){
        sum=(sum+st[i])%3;
        store[st[i]%3]++;
    }
    if(!sum){
        cout<<st<<endl;
        return 0;
    }
    int zero=1;
    while(st[zero]=='0')
        zero++;

    zero-=1;

    if(store[sum]>0 &&st.length()>1 && (zero<=1 || store[sum]>1 || st[0]%3!=sum)) store[sum]--;
    else if(store[3-sum]>1 && st.length()>2) store[3-sum]-=2;
    else if(store[sum]>0 && st.length()>1) store[sum]--;
    else{
        cout<<-1<<endl;
        return 0;
    }
    bool fg=false;
    for(int i=0;i<st.length();i++){
        if(st[i]=='0' && !fg) continue;
        if(store[st[i]%3]){
            cout<<st[i];
            store[st[i]%3]--;
            fg=true;
        }
    }
    if(!fg) cout<<0<<endl;

    return 0;
}
