#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--){
        int n, cnt;
        cin>>n;
        cnt=2*n;
        string s, s2;
        cin>>s>>s2;
        if(s==s2){
            cout<<"Yes"<<endl;
            cout<<"1\n1 1"<<endl;
            continue;
        }
        vector<pair<int,int> > p;
        for(int i=0;i<n && cnt;i++){
            if(s[i]==s2[i]) continue;
            for(int j=i+1;j<n && cnt;j++){
                if(s[j]==s2[j]) continue;
                if(s2[j]==s2[i] && s[i]==s[j]){
                    swap(s[i],s2[j]);
                    p.push_back({i,j});
                    cnt--;
                    break;
                }
            }
        }
        if(s==s2){
            cout<<"Yes"<<endl;
            cout<<p.size()<<endl;
            for(auto i:p){
                cout<<i.first+1<<" "<<i.second+1<<endl;
            }
        }
        else cout<<"No"<<endl;
    }

    return 0;
}
