#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    ios_base::sync_with_stdio(false);
    int left=0,right=0;
    int n;
    cin>>n;
    while(n--){
        LL x,y;
        cin>>x>>y;
        if(x<0)
            left++;
        else
            right++;
    }
    if(min(left,right)<=1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
