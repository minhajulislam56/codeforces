#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > cans;
bool comp(pair<int,int> a, pair<int,int> b)
{
    return a.first>b.first;
}
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cans.push_back({x,i});
    }
    sort(cans.begin(), cans.end(), comp);

    int sum=0;
    int arr[n+5];
    for(int i=0;i<n;i++){
        sum+=(cans[i].first*i)+1;
        arr[i]=cans[i].second+1;
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
