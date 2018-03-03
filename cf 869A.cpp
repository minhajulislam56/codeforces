#include<bits/stdc++.h>
using namespace std;
#define MAX 10000007
bool mark[MAX];
int main()
{
    int n;
    cin>>n;

    int x[n+5], y[n+5];
    long int t;
    for(int i=0;i<n;i++){
        scanf("%d", &x[i]);
        mark[x[i]]=true;
    }
    for(int i=0;i<n;i++){
        scanf("%d", &y[i]);
        mark[y[i]]=true;
    }
    int fuck=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            t=x[i]^y[j];
            if(mark[t])
                fuck++;
        }
    }

    (fuck%2)?cout<<"Koyomi"<<endl:cout<<"Karen"<<endl;

    return 0;
}
