#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(c>=d){
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    else if(2*c>=d)
        cout<<2*c+10<<endl<<2*c+5<<endl<<2*c<<endl;
    else
        cout<<-1<<endl;


    return 0;
}

