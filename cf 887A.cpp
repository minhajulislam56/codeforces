#include<bits/stdc++.h>
using namespace std;
bool mark;
int main()
{
    string st;
    cin>>st;
    int cnt=0;
    for(int i=0;i<st.size();i++){
        if(st[i]=='1') mark=true;
        if(mark && st[i]=='0') cnt++;
        if(cnt>=6){
            cout<<"yes"<<endl;
            return 0;
        }
    }
    cout<<"no"<<endl;

    return 0;
}
