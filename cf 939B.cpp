#include<bits/stdc++.h>
using namespace std;
#define ULL unsigned long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,no;
    ULL k,minn,bn;
    cin>>k>>n;
    minn=LLONG_MAX;
    for(int i=1;i<=n;i++){
        ULL x;
        cin>>x;
        if(k%x<minn){
            minn=k%x;
            no=i;
            bn=(ULL)k/x;
        }
    }

    cout<<no<<" "<<bn<<endl;

    return 0;
}
