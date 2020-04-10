#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,yy;
    cin>>x>>y;
    yy=y;
    vector<int> v;
    while(y>x){
        if(y%10==1){
            y=y-1;
            y/=10;
            v.push_back(y);
        }
        else if(y%2==0){
            y/=2;
            v.push_back(y);
        }
        else break;
    }
    if(x==y){
        cout<<"YES"<<endl;
        cout<<v.size()+1<<endl;
        for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
        cout<<yy<<endl;
    }
    else cout<<"NO"<<endl;


    return 0;
}
