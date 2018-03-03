#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    LL n,m, mid, result, left, right;
    cin>>n>>m;
    if(m>=n){
        cout<<n<<endl;
        return 0;
    }
    left=0;
    right=2e9;
    n-=m;
    while(left<right){
        mid=(left+right)/2;
        result=(mid*(mid+1))/2;
        if(result>=n)
            right=mid;
        else
            left=mid+1;
    }
    cout<<left+m<<endl;

    return 0;
}
