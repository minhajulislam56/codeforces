#include<bits/stdc++.h>
using namespace std;
int left_sum[100009];
int right_sum[100009];
int weight[100009];
int main()
{
    int n,l,r,ql,qr;
    cin>>n>>l>>r>>ql>>qr;
    for(int i=1;i<=n;i++)
        cin>>weight[i];
    for(int i=1;i<=n;i++){
        left_sum[i]=left_sum[i-1]+weight[i];
        right_sum[i]=right_sum[i-1]+weight[n-i+1];
    }
    long long int minn=1<<30, temp;
    for(int i=0;i<=n;i++){
        temp=l*left_sum[i]+r*right_sum[n-i];
        if(i*2<n){
            temp+=qr*(n-2*i-1);
        }
        if(i*2>n){
            temp+=ql*(2*i-n-1);
        }
        if(temp<minn)
            minn=temp;
    }
    cout<<minn<<endl;

    return 0;
}
