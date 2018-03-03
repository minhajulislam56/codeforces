#include<bits/stdc++.h>
using namespace std;
#define MAX 200007
int mark[MAX];
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        mark[num]=i;
    }
    int maxx=INT_MAX;
    int ans;
    for(int i=0;i<MAX;i++){
        if(mark[i]!=0 && mark[i]<maxx){
            maxx=mark[i];
            ans=i;
        }
    }
    cout<<ans<<endl;

    return 0;
}
