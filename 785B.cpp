#include<bits/stdc++.h>
using namespace std;
pair <long long int,long long int> pa;
pair <long long int,long long int> pa2;
vector <pair <long long int,long long int> > v;
vector <pair <long long int,long long int> > v2;
bool myComp1(pair <long long int,long long int> a, pair <long long int,long long int> b)
{
    return a.second<b.second;
}
bool myComp2(pair <long long int,long long int> a, pair <long long int,long long int> b)
{
    return a.first>b.first;
}

int main()
{
    int n,m,n1,m1;
    cin>>n;
    n1=n;
    while(n--){
        long long int x,y;
        cin>>x>>y;
        pa=make_pair(x,y);
        v.push_back(pa);
    }
    sort(v.begin(),v.end(), myComp1);

    cin>>m;
    m1=m;
    while(m--){
        long long int x,y;
        cin>>x>>y;
        pa2=make_pair(x,y);
        v2.push_back(pa2);
    }
    sort(v2.begin(), v2.end(), myComp2);

    long long int maxx=0;
    for(int i=0;i<n1;i++){
        if(v[i].second>v2[0].first && v[i].first<v2[0].second)
            break;
        for(int j=0;j<m1;j++){
            maxx=max(maxx,v2[j].first-v[i].second);
            maxx=max(maxx,v[i].first-v2[j].second);
        }
    }

/*
    sort(v.begin(),v.end(),myComp2);
    sort(v2.begin(),v2.end(), myComp1);

    for(int i=0;i<n1;i++){
        if(v2[i].second>v[0].first)
            break;
        for(int j=0;j<m1;j++){
            maxx=max(maxx,v[j].first-v2[i].second);
        }
    }
    */
    cout<<maxx<<endl;

    return 0;
}
