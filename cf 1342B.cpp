#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        string s="", t;
        cin>>t;
        bool sig=true;
        for(int i=1;i<t.length();i++){
            if(t[i]!=t[i-1]) sig=false;
        }
        if(sig) cout<<t<<endl;
        else{
            s+=t[0];
            int pos=0;
            for(int i=1;i<t.length();i++, pos++){
                if(t[i]==s[pos]) s+=(1-(t[i]-'0'))+'0', pos++;
                s+=t[i];
            }
            cout<<s<<endl;
        }
    }

    return 0;
}
