#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int a,b;
    cin>>a>>b;
    long long int yl,gr,bl;
    cin>>yl>>gr>>bl;

    long long int yello=0,green=0;
    yello+=yl*2;
    yello+=gr, green+=gr;
    green+=bl*3;

    long long int ans=0;
    if(yello-a>0)
        ans+=yello-a;
    if(green-b>0)
        ans+=green-b;
    cout<<ans<<endl;

    return 0;
}
