#include<bits/stdc++.h>
using namespace std;
bool palindrome(string st)
{
    if(st==string(st.rbegin(),st.rend()))
        return true;
    else
        return false;
}
int main()
{
    string st;
    cin>>st;
    if(palindrome(st))
        cout<<"YES"<<endl;
    else{
        int cnt, cnt2;
        cnt=cnt2=0;
        for(int i=0;i<st.length();i++){
            if(st[i]=='0')
                cnt++;
            else
                break;
        }
        if(cnt){
            st.erase(0,cnt);
            if(palindrome(st))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            return 0;
        }
        for(int i=st.length()-1;i>=0;i--){
            if(st[i]=='0')
                cnt2++;
            else
                break;
        }
        if(cnt2){
            st.erase(st.length()-cnt2,st.length()-1);
            if(palindrome(st))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            return 0;
        }
        cout<<"NO"<<endl;
    }

    return 0;
}
