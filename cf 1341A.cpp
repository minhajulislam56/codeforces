#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n, a, b, c, d;
        cin>>n>>a>>b>>c>>d;
        int bg=(a-b)*n, en=(a+b)*n;
        bool flag=false;
        while(bg<=en){
            int m=(bg+en)/2;

            if(m>=(c-d) && m<=(c+d)){
                flag=true;
            }
            if(m>(c+d)) en=m-1;
            else bg=m+1;
        }
        cout<<(flag?"Yes":"No")<<endl;
    }

    return 0;
}
