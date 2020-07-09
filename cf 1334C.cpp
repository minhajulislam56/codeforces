#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        long long n, pd=-1, nd=1e12+5, pa, paa, na, naa, sum=0, d;
        cin>>n;
        for(int i=0;i<n;i++){
            long long a, b;
            cin>>a>>b;
            sum+=b;
            if(b>=a){
                d=b-a;
                if(d>pd){
                    pd=d;
                    pa=a;
                    paa=b;
                }
            }
            else{
                d=a-b;
                if(d<nd){
                    nd=d;
                    na=a;
                    naa=b;
                }
            }
        }
        if(pd!=-1){
            long long ans=sum/paa;
            if(sum%paa) ans+=1;
            cout<<ans*pa<<endl;
        }
        else{
            long long ans=sum/naa;
            if(sum%naa) ans+=1;
            cout<<ans*na<<endl;
        }
    }

    return 0;
}
