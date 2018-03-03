#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;

    if(a==b || b==0)
        cout<<0<<" "<<0<<endl;
    else if((b*2)+b<=a)
        cout<<1<<" "<<b*2<<endl;
    else
        cout<<1<<" "<<a-b<<endl;

    return 0;
}
