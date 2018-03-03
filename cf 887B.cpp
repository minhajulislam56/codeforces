#include<bits/stdc++.h>
using namespace std;
bool mp[1010];
int main()
{
    int n,x,tmp;
    cin>>n;
    vector<int> v[4];
    for(int i=0;i<n;i++){
        for(int j=0;j<6;j++){
            cin>>x;
            mp[x]=true;
            v[i].push_back(x);
        }
    }
    if(n==3){
        for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                tmp=v[0][i]*10+v[1][j];
                mp[tmp]=true;
                tmp=v[0][i]+v[1][j]*10;
                mp[tmp]=true;
                tmp=v[1][i]*10+v[2][j];
                mp[tmp]=true;
                tmp=v[1][i]+v[2][j]*10;
                mp[tmp]=true;
                tmp=v[2][i]*10+v[0][j];
                mp[tmp]=true;
                tmp=v[2][i]+v[0][j]*10;
                mp[tmp]=true;
            }
        }
    }
    else if(n==2){
        for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                tmp=v[0][i]*10+v[1][j];
                mp[tmp]=true;
                tmp=v[0][i]+v[1][j]*10;
                mp[tmp]=true;
            }
        }
    }
    int i=1;
    while(true){
        if(mp[i]==false){
            cout<<i-1<<endl;
            return 0;
        }
        i++;
    }


    return 0;
}
