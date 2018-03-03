#include<bits/stdc++.h>
using namespace std;
bool mark[1000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n,cnt=0;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x){
            if(!mark[x]){
                cnt++;
                mark[x]=true;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}
