#include<bits/stdc++.h>
using namespace std;
vector<pair<string,long long int> > data;
bool comp(pair<string,long long int> a, pair<string,long long int> b)
{
    if(a.second==b.second)
        return a.first>b.first;
    else
        return a.second<b.second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    string st;
    long long int scor;
    for(int i=0;i<n;i++){
        cin>>st>>scor;
        data.push_back(make_pair(st,scor));
    }

    sort(data.begin(),data.end(),comp);
    int m;
    cin>>m;
    vector<long long int> point;
    point.assign(n+5,0);
    for(int i=0;i<m;i++){
        cin>>point[i];
    }
    sort(point.rbegin(),point.rend());

    cin>>st;
    int x=0;
    while(true){
        if(data[x].first==st) break;
        x++;
    }

    long long int total=data[x].second+point[0];
    int in=1, first=1;
    for(int i=0;i<n;i++){
        if(data[i].first!=st){
            long long int z=total-data[i].second;
            if(data[i].first<st) z--;
            //cout<<data[i].first<<" "<<st<<endl;
            //cout<<i<<" "<<point[in]<<" "<<z<<" "<<total<<endl;
            if(in>=n || point[in]>z){
                    first++;
                //cout<<"barse: "<<i<<endl;
            }
            in++;
        }
    }
    //cout<<first<<endl;

    total=data[x].second+point[n-1];
    in=0;
    int second=1;

    for(int i=0;i<n;i++){
        if(data[i].first!=st){
            long long int z=total-data[i].second;
            if(data[i].first>st) z++;
            if(in<n && point[in]>=z)
                in++, second++;
        }
    }
    cout<<first<<" "<<second<<endl;

    return 0;
}

