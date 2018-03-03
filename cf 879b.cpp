#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int k,chk;
    int n,p;
    cin>>n>>k;
    queue<int> line;
    for(int i=0;i<n;i++){
        cin>>p;
        line.push(p);
    }
    int fr,sn,winr,nw;
    fr=line.front();
    line.pop();
    sn=line.front();
    line.pop();
    winr=max(fr,sn);
    chk=1;
    while(!line.empty() && chk<k){
        nw=line.front();
        line.pop();
        if(winr>nw){
            chk++;
        }
        else{
            winr=nw;
            chk=1;
        }
    }
    cout<<winr<<endl;

    return 0;
}

