#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
map<pair<pii,int>,bool> mp;
set<pair<pii,int> > s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,arr[4];
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int tmp=i^j;
            if(tmp>0 && tmp<=n){
                arr[0]=i,arr[1]=j,arr[2]=tmp;
                sort(arr,arr+3);
                pair<pii,int> mm=make_pair(make_pair(arr[0],arr[1]),arr[2]);
                if(arr[2]<(arr[0]+arr[1]) && !mp[mm]){
                    ans++;
                    mp[mm]=true;
                    //s.insert({{arr[0],arr[1]},arr[2]});
                }
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}
