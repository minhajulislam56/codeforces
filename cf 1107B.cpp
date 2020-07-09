#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--){
        long long k, x;
        cin>>k>>x;
        k=(k-1)*9ll;
        k+=x;
        cout<<k<<endl;
    }

    return 0;
}



