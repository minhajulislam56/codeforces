#include<bits/stdc++.h>
using namespace std;
map<char,char> mp;
map<char,bool> mark;
int main()
{
    string pat, res;

    cin>>pat>>res;
    int cnt=0;
    vector<pair<char,char> > store;
    for(int i=0;i<pat.size();i++){
        if(!mark[pat[i]] && !mark[res[i]]){
            mp[pat[i]]=res[i];
            mp[res[i]]=pat[i];
            if(pat[i] != res[i]){
                store.push_back(make_pair(pat[i],res[i]));
                cnt++;
            }
            mark[pat[i]]=mark[res[i]]=true;
        }
        else{
            if(mp[pat[i]] != res[i]){
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<store.size();i++){
        cout<<store[i].first<<" "<<store[i].second<<endl;
    }

    return 0;
}
