#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int cnt=0;
    for(int i=0;i<st.length();i++){
        if(st[i]=='Q'){
            for(int j=i+1;j<st.length();j++){
                if(st[j]=='A'){
                    for(int k=j+1;k<st.length();k++){
                        if(st[k]=='Q')
                            cnt++;
                    }
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}

