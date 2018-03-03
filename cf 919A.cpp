#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n,m;
    cin>>n>>m;
    double ans=999999.0;
    for(int i=0;i<n;i++){
        double a,b;
        cin>>a>>b;
        ans=min(ans,(a*m)/b);
    }
    printf("%.8lf\n",ans);

    return 0;
}
