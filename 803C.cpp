#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    LL n,k,d=1;
    scanf("%I64d%I64d",&n,&k);
    LL p=2*n/(k+1)/k;
    if(!p){
        printf("-1");
        return 0;
    }
    for(LL i=1;i*i<=n;i++){
        if(n%i)
            continue;
        if(i<=p && i>d)
            d=i;
        if(n/i<=p && n/i>d)
            d=n/i;
    }
    for(LL i=1;i<k;i++)
        printf("%I64d ", d*i);
    printf("%I64d\n", n-d*k*(k-1)/2);

    return 0;
}
