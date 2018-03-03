#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define MAX 100007
int main()
{
    ios_base::sync_with_stdio(false);
    LL n,x,k;
    cin>>n>>x>>k;
    vector<LL> vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    vector<LL>::iterator up, down;
    LL ans=0;
    for(int i=0;i<n;i++){
        LL low,high;
        if(vec[i]%x==0){
            low=max(vec[i],vec[i]+(x*(k-1)-(vec[i]%x)));
            high=vec[i]+(x*k-(vec[i]%x));
        }
        else{
            low=max(vec[i],vec[i]+(x*k-(vec[i]%x)));
            high=vec[i]+(x*(k+1)-(vec[i]%x));
        }
        down=lower_bound(vec.begin(),vec.end(),low);
        up=lower_bound(vec.begin(),vec.end(),high);
        //cout<<down-vec.begin()<<" "<<up-vec.begin()<<endl;
        ans+=(up-vec.begin())-(down-vec.begin());
    }
    cout<<ans<<endl;

    return 0;
}
