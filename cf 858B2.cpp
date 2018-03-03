#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, ft, fl;
    cin>>n>>m;

    vector<pair<int,int> > data;
    for(int i=0;i<m;i++){
        cin>>ft>>fl;
        data.push_back(make_pair(ft,fl));
    }
    int ans=-1;
    for(int i=1;i<=100;i++){
        bool mark=true;
        int temp;
        for(int j=0;j<m;j++){
            temp=((data[j].first-1)/i)+1;
            if(temp!=data[j].second)
                mark=false;
        }
        if(mark){
            //cout<<i<<endl;
            if(ans==-1){
                ans=((n-1)/i)+1;
            }
            else if(ans != ((n-1)/i)+1){
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}
