#include<bits/stdc++.h>
using namespace std;
map<char,int> mp;
int main()
{
    int n;
    string st;
    cin>>n>>st;

    for(int i=0;i<n;i++){
        mp[st[i]]++;
    }
    map<char,int>::iterator itr;
    vector<char> even,odd;
    for(itr=mp.begin();itr!=mp.end();itr++){
        if(itr->second%2==1){
            odd.push_back(itr->first);
            mp[itr->first]--;
        }
        while(itr->second!=0){
            even.push_back(itr->first);
            mp[itr->first]-=2;
        }
    }
    //cout<<even.size()<<" "<<odd.size()<<endl;
    if(odd.empty()){
        cout<<1<<endl;
        for(int i=0;i<even.size();i++)
            cout<<even[i];
        for(int i=even.size()-1;i>=0;i--)
            cout<<even[i];
        cout<<endl;
        return 0;
    }

    while(even.size()%odd.size()){
        odd.push_back(even.back());
        odd.push_back(even.back());
        even.pop_back();
    }
    //else{
        int len=n/odd.size();
        cout<<odd.size()<<endl;
        for(int i=0,k=0;i<odd.size();i++){
            string tmp;
            for(int j=0;j<len/2;j++){
                tmp.push_back(even[k++]);
            }
            cout<<tmp<<odd[i];
            reverse(tmp.begin(),tmp.end());
            cout<<tmp<<" ";
        }
    //}
    return 0;
}
