#include<bits/stdc++.h>
using namespace std;
#define LL long long
const LL cnst=2e9+7;
LL arr[100005];
int main()
{
    LL n,k,num,sum=0;
    bool flag=false;
    LL minn=cnst;
    scanf("%I64d%I64d", &n,&k);
    for(int i=0;i<n;i++){
        scanf("%I64d",&arr[i]);
        if(arr[i]<minn)
            minn=arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i]-minn;
        if((arr[i]-minn)%k)
            flag=true;
    }
    if(sum%k || flag)
        cout<<-1<<endl;
    else{
        cout<<sum/k<<endl;
    }

    return 0;
}
