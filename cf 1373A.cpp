#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        long long a, b, c;
        cin>>a>>b>>c;

        int x=1, y=b;
        if(c<=a) x=-1;
        else if(a*b<=c) y=-1;
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}
