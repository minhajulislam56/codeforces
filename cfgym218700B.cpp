#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main()
{
    int tc,ca=1;
    scanf("%d",&tc);
    while(tc--){
        LL hx,ot;
        scanf("%llX %llo", &hx, &ot);
        //cout<<"Case "<<dec<<ca++<<": ";
        printf("Case %d: ", ca++);
        //hx==ot?cout<<uppercase<<hex<<hx<<"(16) = "<<dec<<hx<<"(10) = "<<oct<<ot<<"(8)"<<endl:cout<<uppercase<<hex<<hx<<"(16) = "<<dec<<hx<<"(10) AND "<<oct<<ot<<"(8) = "<<dec<<ot<<"(10)"<<endl;
        hx==ot?printf("%llX(16) = %lld(10) = %llo(8)\n",hx,hx,ot):printf("%llX(16) = %lld(10) AND %llo(8) = %lld(10)\n",hx,hx,ot,ot);
    }

    return 0;
}
