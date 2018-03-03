#include<bits/stdc++.h>
using namespace std;
const double e=1e-9;
#define MAX 60005
int main()
{
    double x[MAX], v[MAX],low, high, mid,temp;
    int n,mark,j;
    low=1<<30;
    high=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
        low=min(low, x[i]);
        high=max(high,x[i]);
    }
    for(int i=0;i<n;i++)
        cin>>v[i];
    double result;
    while(high-low>e){
        mid=(low+high)/2;
        for(j=0,result=0;j<n;j++){
            temp=fabs(mid-x[j])/v[j];
            //cout<<"temp: "<<temp<<endl;
            if(temp>result){
                result=temp;
                mark=j;
            }
        }
        if(mid<x[mark])
            low=mid;
        else
            high=mid;
        //cout<<"resultf: "<<result<<endl;
        //cout<<"low: "<<low<<" "<<"high: "<<high<<endl;
    }
    printf("%lf\n", result);


    return 0;
}
