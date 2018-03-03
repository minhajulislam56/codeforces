#include<bits/stdc++.h>
using namespace std;
#define MAX 100007
vector<long long> vec[MAX];
int main()
{
    int n,k,m;
    cin>>n>>k>>m;

    int maxx=0,x;
    long long tmp;

    for(int i=0;i<n;i++){
        cin>>tmp;
        vec[tmp%m].push_back(tmp);
        if(vec[tmp%m].size()>vec[maxx].size())
            maxx=tmp%m;
    }

    if(vec[maxx].size()>=k){
        cout<<"Yes"<<endl;
        for(int i=0;i<k;i++){
            cout<<vec[maxx][i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"No"<<endl;
    }


    return 0;
}
