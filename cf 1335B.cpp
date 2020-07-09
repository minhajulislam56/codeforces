#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n, a, b;
        cin>>n>>a>>b;
        string st="";
        for(int i=0;i<a;i++){
            if(i<b) st+=(char)('a'+i);
            else st+=st[st.length()-1];
        }
        for(int i=0;i<n;i++){
            cout<<st[i%a];
        }
        cout<<endl;
    }

    return 0;
}
