#include<bits/stdc++.h>
using namespace std;
bool get, left1, left2, right1, right2;
int main()
{
    string n, in;
    int t;
    cin>>n>>t;

    for(int i=0;i<t;i++){
        cin>>in;
        if(get) continue;
        if((in[0]==n[0] && in[1]==n[1]) || (in[1]==n[0] && in[0]==n[1]))
            get=true;
        if(in[0]==n[1])
            left1=true;
        if(in[1]==n[0])
            right1=true;
        if(in[1]==n[0])
            left2=true;
        if(in[0]==n[1])
            right2=true;

    }

    if(get || (left1 && right1) || (left2 && right2))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
