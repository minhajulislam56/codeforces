#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;

    char tpch=st[0];
    int mc, bc=0, sc=0,mark=0, fans=INT_MIN;
    bool bfuck=true;
    int i=0;
    while(st[i]=='b'){
        bc++;
        i++;
    }
    fans=max(fans,bc);
    if(i==st.size()){
        cout<<fans<<endl;
        return 0;
    }
    tpch=st[i];
    mc=1;
    for( i=i+1;i<st.size();i++){
        if(tpch!=st[i] && mark==2){
            fans=max(mc,fans);
            mc=0;
            mc+=sc;
            sc=0;
            tpch=st[i];
            mark=1;
        }
        if(tpch!=st[i] && mark==0){
            mark=1;
            if(bfuck){
                bc+=mc;
                fans=max(fans,bc);
                bfuck=false;
            }
            tpch=st[i];
        }
        if(tpch!=st[i] && mark==1){
            mark=2;
            tpch=st[i];
        }
        if(mark==2)
            sc++;
        mc++;
    }
    if(bfuck){
        fans+=mc;
    }
    fans=max(mc,fans);
    cout<<fans<<endl;

    return 0;
}

