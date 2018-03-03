#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ft,fl;
    cin>>n>>m;

    vector<pair<int,int> > store;
    int minft,minfl,maxxo=2;
    minft=minfl=INT_MAX;
    int maxfl, maxft;
    maxfl=maxft=-1;
    for(int i=0;i<m;i++){
        cin>>ft>>fl;
        if(fl<=minfl && ft<minft && fl!=1){
            minfl=fl;
            minft=ft;
        }
        if(ft>maxft && fl>=maxfl){
            maxfl=fl;
            maxft=ft;
        }
        if(fl==1){
            maxxo=max(maxxo,ft);
        }
        store.push_back(make_pair(ft,fl));
    }
    int diff=(minft-1)/(minfl-1);
    vector<pair<int,int> > data[105];
    for(int i=maxxo-1;i<diff;i++){
        int tmp=1;
        for(int j=1;j<=maxfl;j++){
            data[i].push_back(make_pair(tmp,tmp+i));
            tmp=tmp+i+1;
        }
    }
    int fnd=0, mdiff, clm;
    for(int i=maxxo-1;i<diff;i++){
        for(int j=0;j<maxfl;j++){
            cout<<data[i][j].first<<" "<<data[i][j].second<<"  ";
            if(maxft>=data[i][j].first && maxft<=data[i][j].second){
                if(fnd==1 && j==clm){
                    cout<<-1<<endl;
                    //return 0;
                }
                if(fnd==0){
                    fnd=1;
                    mdiff=i+1;
                    clm=j;
                }
            }
        }
        cout<<endl;
    }
    (n%mdiff)?cout<<(n/mdiff)+1<<endl:cout<<n/mdiff<<endl;

    return 0;
}
