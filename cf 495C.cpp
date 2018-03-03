#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int arr[100007];
    int h=0, chk=0, las=0;
    for(int i=0;i<st.length();i++){
        if(st[i]=='('){
            chk++;
            las++;
        }
        else if(st[i]==')'){
            chk--;
            if(las>0) las--;
        }
        else{
            chk--;
            h++;
            las=0;
        }
        if(chk<0){
            cout<<-1<<endl;
            return 0;
        }
    }
    if(las){
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0;i<h-1;i++){
        cout<<1<<endl;
    }
    cout<<chk+1<<endl;

    return 0;
}
