#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<double> frnd, velo;
    double low=LLONG_MAX*1.0,high=LLONG_MIN*1.0,num;
    for(int i=0;i<n;i++){
        cin>>num;
        frnd.push_back(num);
        low=min(low,num);
        high=max(high,num);
    }
    for(int i=0;i<n;i++){
        cin>>num;
        velo.push_back(num);
    }
    int i;
    double res;
    while(high-low>0.0000001){
        double mid=(high+low)/2.0;
        int mark;
        for(i=0,res=0;i<n;i++){
            double tmp=fabs(mid-frnd[i])/velo[i];
            if(tmp>res){
                res=tmp;
                mark=i;
            }
        }
        if(mid<frnd[mark])
            low=mid;
        else
            high=mid;
    }
    printf("%lf\n",res);
    return 0;
}
