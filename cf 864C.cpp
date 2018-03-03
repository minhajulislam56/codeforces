#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define PB push_back
int main(){
    LL a,b,f,k;

    cin>>a>>b>>f>>k;

    if(b<f){
        cout<<-1<<endl;
        return 0;
    }
    LL now=b-f;
    int need=0;

    for(int i=1;i<k;i++){
        if(now<2*(a-f)){
            need++;
            now=b;
        }
        now-=2*(a-f);
        if(now<0){
            cout<<-1<<endl;
            return 0;
        }
        f=a-f;
    }

    if(now<a-f){
        need++;
        now=b;
    }
    now-=a-f;
    if(now<0){
        cout<<-1<<endl;
        return 0;
    }
    cout<<need<<endl;

    return 0;
}
