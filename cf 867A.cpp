#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string st;
    cin>>st;
    int sea=0, fan=0;
    char temp=st[0];
    for(int i=1;i<st.length();i++){
        if(st[i]!=temp){
            (temp=='F')?fan++:sea++;
            temp=st[i];
        }
    }
    if(sea>fan)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
