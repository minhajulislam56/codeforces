#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nn;
    string st;
    cin>>nn>>st;

    int z=0,e=0,r=0,o=0,n=0;

    for(int i=0;i<nn;i++){
        if(st[i]=='z') z++;
        else if(st[i]=='e') e++;
        else if(st[i]=='r') r++;
        else if(st[i]=='o') o++;
        else n++;
    }

    int one=0, zero=0;
    while(n--){
        if(o && e){
            o--, e--, one++;
        }
    }
    while(z--){
        if(e && r && o){
            e--,r--,o--, zero++;
        }
    }

    for(int i=0;i<one;i++) cout<<1<<" ";
    for(int i=0;i<zero;i++) cout<<0<<" ";
    cout<<endl;

    return 0;
}
