#include<bits/stdc++.h>
using namespace std;
int n;
string st[2];
bool func(int p, int q, int las, int ls)
{
    if(ls!=-1 && st[p][q]=='1' || st[p][q]=='2' && p!=ls) return false;
    if(q==n){
        return p?true:false;
    }
    cout<<p<<" "<<q<<endl;
    if(las==-1){
        if(st[p][q]=='1' || st[p][q]=='2') return func(p,q+1,st[p][q]-'0',p);
        else return func(p?0:1,q,st[p][q]-'0',p);
    }
    else{
        if(st[p][q]=='1' || st[p][q]=='2') return func(p,q+1,st[p][q]-'0',p);
        else{
            if(las<=2) return func(p?0:1,q,st[p][q]-'0',p);
            else return func(p,q+1,st[p][q]-'0',p);
        }
    }
}
int main()
{
    int q;
    //cin>>q;
    //while(q--){
        cin>>n>>st[0]>>st[1];
        cout<<(func(0,0,-1,-1)?"YES":"NO")<<endl;
    //}



    return 0;
}
