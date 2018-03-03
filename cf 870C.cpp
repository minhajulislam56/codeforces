#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        long long q,chk;
        cin>>q;
        if(q==11){
            cout<<-1<<endl;
            continue;
        }
        chk=q/4;
        if(q%2==1)
            chk--;
        chk>0?cout<<chk<<endl:cout<<-1<<endl;
    }

    return 0;
}
