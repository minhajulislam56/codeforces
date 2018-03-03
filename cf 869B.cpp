#include<bits/stdc++.h>
using namespace std;
#define ULL unsigned long long
int main()
{
    ULL a,b;
    cin>>a>>b;

    ULL reslt=1;
    ULL lim=b-a;
    while(reslt && lim>0){
        reslt=(reslt*(b%10))%10;
        b--;
        lim--;
    }
    cout<<reslt<<endl;

    return 0;
}
