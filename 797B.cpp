#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,minn=1<<30;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num>0)
            sum+=num;
        num=abs(num);
        if(num%2==1){
            minn=min(num,minn);
        }
    }
    (sum%2==1)?cout<<sum<<endl:cout<<sum-minn<<endl;

    return 0;
}
