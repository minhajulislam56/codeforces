#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);

    int tc;
    cin>>tc;
    while(tc--){
        string st;
        cin>>st;
        int tmp=st[st.length()-1];
        tmp%=6;
        for(int i=st.length()-2;i>=0;i--){
            tmp=((st[i]-'0')*10)+tmp;
            tmp%=6;
        }
        tmp?cout<<"NO"<<endl:cout<<"YES"<<endl;
    }

    return 0;
}
