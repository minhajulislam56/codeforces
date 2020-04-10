#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
        long long c,m,x;
        cin>>c>>m>>x;
        long long cc=min(c,m);
        long long ft=min(cc,x);
        c-=ft;
        m-=ft;
        long long rem=(c+m)/3;
        ft+=min(rem,min(c,m));
        cout<<ft<<endl;
    }

    return 0;
}
