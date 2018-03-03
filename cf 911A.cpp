#include<bits/stdc++.h>
using namespace std;
map<long long int, bool> mark;
map<long long int, long long int> pos, ans;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    long long fuck=LLONG_MAX;
    for(long long int i=0;i<n;i++){
        long long int tmp;
        cin>>tmp;
        fuck=min(fuck,tmp);
        if(mark[tmp]==0){
            pos[tmp]=i;
            mark[tmp]=true;
        }
        else{
            if(ans[tmp]!=0)
                ans[tmp]=min(ans[tmp],i-pos[tmp]);
            else
                ans[tmp]=i-pos[tmp];
            pos[tmp]=i;
        }
    }
    cout<<ans[fuck]<<endl;


    return 0;
}
