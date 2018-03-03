#include<bits/stdc++.h>
using namespace std;
int main()
{
    string first,second,st;
    map<char,char>m;

    cin>>first>>second>>st;
    for(int i=0;i<second.length();i++)
        m[first[i]]=second[i];

    for(int i=0;i<st.length();i++){
        if(st[i]>='0' && st[i]<='9')
            cout<<st[i];
        else{
            if(isupper(st[i])){
                cout<<(char)toupper(m[(char)tolower(st[i])]);
            }
            else{
                cout<<m[st[i]];
            }
        }
    }
    cout<<endl;



    return 0;
}
