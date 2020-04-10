#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string st;
    cin>>st;
    if(n==1){
        if(k==0) cout<<st<<endl;
        else cout<<0<<endl;
        return 0;
    }
    bool fa=false;
    for(int i=0;i<n && k;i++){
        if(!fa){
            if(st[i]!='1'){
                st[i]='1';
                k--;
            }
            fa=true;
        }
        else{
            if(st[i]!='0') st[i]='0', k--;
        }
    }

    cout<<st<<endl;

    return 0;
}
