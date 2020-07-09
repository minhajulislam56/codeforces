#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        string s;
        cin>>n>>s;
        stack<char> drum;
        for(int i=0;i<n;i++){
            if(s[i]=='(') drum.push('(');
            else{
                if(!drum.empty()) drum.pop();
            }
        }
        cout<<drum.size()<<endl;
    }

    return 0;
}


