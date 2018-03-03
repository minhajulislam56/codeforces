#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return a>b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;

    vector<int> piz;
    int maxx=INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        piz.push_back(x);
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=piz[j];
            maxx=min(maxx,abs(360-2*sum));
        }
    }
    cout<<maxx<<endl;
    return 0;
}
