#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        string st1, st2;
        cin>>st1>>st2;
        if(st1==st2){
            cout<<"Yes"<<endl;
            continue;
        }
        vector<int>sw;
        for(int i=0;i<n;i++){
            if(st1[i]!=st2[i]) sw.push_back(i);
        }
        if(sw.size()==2){
            swap(st1[sw[0]], st2[sw[1]]);
            if(st1!=st2) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

    return 0;
}

