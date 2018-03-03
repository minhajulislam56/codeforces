#include<bits/stdc++.h>
using namespace std;

//typedefs
#define LL long long
#define MAX 1000007
#define PB push_back
#define MP(a,b) make_pair(a,b)

const LL lmax=(LL) 1e12;
LL mt[MAX],ct[MAX],mf[MAX],cf[MAX];
vector<pair<pair<LL,LL>,pair<LL,LL> > > vec[MAX];
int main()
{
    LL n,m,k;
	scanf("%I64d %I64d %I64d", &n, &m, &k);
	for(int i=0;i<m;i++)
	{
		LL da,dp,ar,co;
		//cin>>da>>dp>>ar>>co;
		scanf("%I64d %I64d %I64d %I64d", &da, &dp, &ar, &co);
        vec[da].PB(MP(MP(dp,co),MP(ar,co)));
	}
	for(int i=0;i<1000002;i++)
        cf[i]=ct[i]=mt[i]=mf[i]=lmax;
    LL value=n*1LL*lmax;

    for(int i=1;i<1000002;i++){
        for(int j=0;j<vec[i].size();j++){
            int city=vec[i][j].first.first;
            if(city){
                if(vec[i][j].first.second>mt[city])
                    continue;
                value-=mt[city];
                value+=vec[i][j].first.second;
                mt[city]=vec[i][j].first.second;
            }
        }
        ct[i]=value;
    }/*
    for(int i=0;i<=15;i++)
        cout<<ct[i]<<" ";
    cout<<endl;*/

    value=n*1LL*lmax;

    for(int i=1000001;i>0;i--){
        for(int j=0;j<vec[i].size();j++){
            int city=vec[i][j].second.first;
            if(city){
                if(vec[i][j].second.second>mf[city])
                    continue;
                value-=mf[city];
                value+=vec[i][j].second.second;
                mf[city]=vec[i][j].second.second;
            }
        }
        cf[i]=value;
    }
    /*for(int i=0;i<=15;i++)
        cout<<cf[i]<<" ";
    cout<<endl;*/
    LL minn=lmax;
    for(int i=0;i+k+1<1000002;i++){
        minn=min(minn,ct[i]+cf[i+k+1]);
    }
    (minn==lmax)?cout<<-1<<endl:cout<<minn<<endl;

    return 0;
}
