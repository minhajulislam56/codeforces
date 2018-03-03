#include<bits/stdc++.h>
using namespace std;
bool m1[12], m2[12];
int main()
{
    int n,m,x;
    cin>>n>>m;

    while(n--){
        cin>>x;
        m1[x]=true;
    }
    while(m--){
        cin>>x;
        m2[x]=true;
    }

    for(int i=1;i<=99;i++){
        if(i%10==0)
            continue;
        if(i<10){
            if(m1[i]==true && m2[i]==true){
                cout<<i<<endl;
                return 0;
            }
        }
        else{
            int t=i,p,q;
            p=t%10;
            t=t/10;
            q=t%10;

            if(m1[p]==true && m2[q]==true){
                (p!=q)?cout<<i<<endl:cout<<p<<endl;
                return 0;
            }
            else if(m2[p]==true && m1[q]==true){
                (p!=q)?cout<<i<<endl:cout<<p<<endl;
                return 0;
            }
        }
    }



    return 0;
}
