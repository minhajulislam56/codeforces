#include<bits/stdc++.h>
using namespace std;
string ans;
int vis[200], seq[200];
void gen(char c)
{
    vis[c]=3;
    if(vis[seq[c]]!=3 && seq[c]){
        gen(seq[c]);
    }
    ans+=c;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string st;
        cin>>st;
        for(int j=1;j<st.length();j++){
            vis[st[j]]=2;
            seq[st[j-1]]=st[j];
        }
        if(!vis[st[0]]) vis[st[0]]=1;
    }

    for(int i='a';i<='z';i++){
        if(vis[i]==1){
            gen(i);
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;

    return 0;
}
