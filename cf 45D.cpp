#include<bits/stdc++.h>
using namespace std;
#define LL long long
bool mark[10000007];
bool comp(const pair<LL,pair<LL,LL> > &a, const pair<LL,pair<LL,LL> > &b)
{
    return a.second.second<b.second.second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector< pair<LL, pair<LL,LL> > > vec;
    LL maxx=-1;
    for(int i=0;i<n;i++){
        LL x,y;
        cin>>x>>y;
        vec.push_back(make_pair(i,make_pair(x,y)));
    }
    sort(vec.begin(),vec.end(),comp);
    LL date[n+5];
    for(int i=0;i<n;i++){
        LL base=vec[i].second.first;
        while(mark[base]){
            base++;
        }
        mark[base]=true;
        date[vec[i].first]=base;
    }

    for(int i=0;i<n;i++)
        cout<<date[i]<<" ";
    cout<<endl;

    return 0;
}
