#include<bits/stdc++.h>
using namespace std;
#define MAX 200002
long long sum[MAX],a[MAX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    for(int i=n+1;i<=n*2;i++)
        sum[i]=sum[i-1]+a[i%n];

    int s,f,d,ans;
    cin>>s>>f;
    d=f-s;
    long long maxx=LLONG_MIN;
    for(int i=0;i<=n;i++){
        if(sum[i+d]-sum[i]>maxx){
            maxx=sum[i+d]-sum[i];
            ans=(n+s-i-1)%n+1;
        }
        if(sum[i+d]-sum[i]==maxx){
            ans=min(ans,((n+s-i-1)%n)+1);
        }
    }
    cout<<ans<<endl;
    return 0;
}
