#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long sum[n+5];
    memset(sum, 0, sizeof sum);

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        sum[i]=sum[i-1]+x;
    }

    set<long long> s = {0};

    long long bg=0, en=1, ans=0;
    while(bg<n){
        while(en<=n && !s.count(sum[en])){
            s.insert(sum[en]);
            en++;
        }
        //cout<<en<<" "<<bg<<" "<<en-bg-1<<endl;
        ans+=en-bg-1;
        s.erase(sum[bg]);
        bg++;
    }
    cout<<ans<<endl;
    return 0;
}
/*
7
1 2 3 4 -10 4 6
*/
