#include<bits/stdc++.h>
using namespace std;
#define ULL unsigned long long int
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--){
        ULL n,fn;
        scanf("%llu",&n);
        ULL pw=1,ans=0;
        if(n==0){
            cout<<1<<endl;
            continue;
        }
        bool fg=0;
        fn=n;
        for(int i=59;i>=0;i--){
            ULL val=(2ULL<<(i-1));
            if(!val) val=1;
            if(fg){
                long long int dif=fn-val;
                if(dif>=0){
                    n=n-val;
                    fn=fn-val;
                }
                else
                    n=n+val;
            }
            if(!fg && val<=n){
                fg=1;
                n=n-val;
                fn=fn-val;
            }
        }
        cout<<n<<endl;
    }

    return 0;
}
