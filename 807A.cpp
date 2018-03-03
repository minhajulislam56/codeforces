#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,n,tmp=1e9;
    int p=0;
    char ch='m';
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x!=y)
            p=1;
        if(tmp<x)
            ch='u';
        tmp=x;
    }
    (p)?cout<<"rated"<<endl:(ch=='m')?cout<<"maybe"<<endl:cout<<"unrated"<<endl;

    return 0;
}
