#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string st, ast;
        cin>>st;
        int len=st.length();
        int dat[150]={};
        for(int i=0;i<len;i++){
            dat[st[i]]++;
        }
        //cout<<dat['L']<<" "<<dat['R']<<" "<<dat['U']<<" "<<dat['D']<<endl;
        int x = min(dat['L'],dat['R']);
        int y = min(dat['U'],dat['D']);
        if(!x && y) cout<<2<<endl<<"UD"<<endl;
        else if(!y && x) cout<<2<<endl<<"LR"<<endl;
        else{
            cout<<(x+y)*2<<endl;
            for(int i=0;i<y;i++) cout<<'U';
            for(int i=0;i<x;i++) cout<<'R';
            for(int i=0;i<y;i++) cout<<'D';
            for(int i=0;i<x;i++) cout<<'L';
            cout<<endl;
        }
    }

    return 0;
}
