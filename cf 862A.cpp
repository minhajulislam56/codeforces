#include<bits/stdc++.h>
using namespace std;
bool mark[200];
int main()
{
    int n,x;
    cin>>n>>x;
    while(n--){
        int t;
        cin>>t;
        mark[t]=true;
    }
    int cnt=0;
    for(int i=0;i<x;i++){
        if(!mark[i]) cnt++;
    }
    if(mark[x])
        cnt++;
    cout<<cnt<<endl;

    return 0;
}
