#include<bits/stdc++.h>
using namespace std;
const long long cst=LLONG_MIN;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;

    vector<long long int> tom,ban,ans(n);

    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        tom.push_back(x);
    }
    for(int i=0;i<m;i++){
        long long x;
        cin>>x;
        ban.push_back(x);
    }
    for(int i=0;i<n;i++)
        ans[i]=cst;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            long long x=tom[i]*ban[j];
            if(x>ans[i])
                ans[i]=x;
        }
    }
    sort(ans.rbegin(),ans.rend());

    cout<<ans[1]<<endl;

    return 0;
}
