#include<bits/stdc++.h>
using namespace std;
bool mark[100000];
int main()
{
    ios_base::sync_with_stdio(false);
    int h1,a1,c, h2, a2;
    cin>>h1>>a1>>c>>h2>>a2;
    int ans=0;
    while(h2>0){
       if(h2-a1<=0){
        mark[ans++]=1;
        break;
       }
       else if(h1-a2<=0) h1+=c;
       else{
        h2-=a1;
        mark[ans]=1;
       }
       h1-=a2;
       ans++;
    }
    cout<<ans<<endl;
    for(int i=0;i<ans;i++)
        mark[i]?cout<<"STRIKE"<<endl:cout<<"HEAL"<<endl;
    return 0;
}

