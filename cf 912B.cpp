#include<bits/stdc++.h>
using namespace std;
#define LL unsigned long long
LL maximumXOR(LL l, LL r) {
    LL q = l ^ r, a = 1;
    while(q){
        q /= 2;
        a <<= 1;
    }
    return --a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    LL n,k;
    cin>>n>>k;
    if(k==1)
        cout<<n<<endl;
    else
        cout<<maximumXOR(1,n);

    return 0;
}
