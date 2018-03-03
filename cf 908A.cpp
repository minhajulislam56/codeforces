#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string st;
    cin>>st;
    int cnt=0;
    for(int i=0;i<st.length();i++){
        if(st[i]>='0' && st[i]<='9'){
            int x=st[i]-'0';
            if(x%2) cnt++;
        }
        else{
            if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u')
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
