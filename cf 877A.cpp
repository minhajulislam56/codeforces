#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st,tmp;
    cin>>st;
    int cnt=0;
    for(int i=0;i<st.size();i++){
        tmp="";
        for(int j=i;j<st.size();j++){
            tmp+=st[j];
            if(tmp=="Danil" || tmp=="Olya" || tmp=="Slava" || tmp=="Ann" || tmp=="Nikita"){
                cnt++;
            }
        }
    }
    (cnt==1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    return 0;
}
