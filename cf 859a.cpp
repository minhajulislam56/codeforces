#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    int n;
    LL contestant, maxx=-1;
    cin>>n;
    while(n--){
        cin>>contestant;
        if(contestant>maxx) maxx=contestant;
    }
    if(maxx-25>=0)
        cout<<maxx-25<<endl;
    else
        cout<<0<<endl;

    return 0;
}
