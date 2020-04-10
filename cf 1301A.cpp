#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        string a, b, c;
        cin>>a>>b>>c;
        int i;
        for(i=0;i<a.length();i++){
            if(a[i]!=b[i]){
                if(a[i]==c[i]) swap(b[i],c[i]);
                else if(b[i]==c[i]) swap(a[i],c[i]);
                else break;
            }
            else{
                if(a[i]!=c[i]) break;
            }
        }
        if(i==a.length()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

