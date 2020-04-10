#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int z=0;
    for(int i=1;i<st.length();i++){
        if(st[i]=='0') z++;
    }
    if(st=="0" || st=="1") cout<<0<<endl;
    else if((st.length()-1)%2){
        int ln=st.length()-2;
        cout<<(ln/2)+1<<endl;
    }
    else{
        if(z==st.length()-1){
            cout<<z/2<<endl;
        }
        else{
            cout<<(((st.length()-1)/2)+1)<<endl;
        }
    }

    return 0;
}
