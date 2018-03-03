#include<bits/stdc++.h>
using namespace std;
int a[200005], b[200005];
int main()
{
    long long int n, k;
    pair <int,int> p;
    vector < pair<int,int> > stock;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        p=make_pair(b[i]-a[i],i);
        stock.push_back(p);
    }
    sort(stock.begin(), stock.end());

    int pos;
    int total=0;
    int cnt=0;
    for(pos=stock.size()-1;pos>=0;pos--){
        if(stock[pos].first>0){
            total+=a[stock[pos].second];
            a[stock[pos].second]=b[stock[pos].second]=0;
            cnt++;
        }
        else
            break;
    }
    while(cnt<k){
        total+=a[stock[pos].second];
        a[stock[pos].second]=b[stock[pos].second]=0;
        cnt++;
        pos--;
    }

    for(int i=0;i<n;i++){
        if(b[i]>0)
            total+=b[i];
    }
    cout<<total<<endl;
}
