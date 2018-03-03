#include<bits/stdc++.h>
using namespace std;
string ans, st;
bool mark;
void build()
{
    if(cin>>st){
        ans+=st;
        if(st=="pair"){
            ans+='<';
            build();
            ans+=',';
            build();
            ans+='>';
        }
    }
    else
        mark=true;
}
int main()
{
    int m;
    cin>>m;
    build();
    if(mark || cin>>st){
        cout<<"Error occurred"<<endl;
    }
    else{
        cout<<ans<<endl;
    }

    return 0;
}
