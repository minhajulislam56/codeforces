#include<bits/stdc++.h>
using namespace std;
map<long long,bool> fuck;
int main()
{
    int n,cnt=0;
    for(int i=0;i<4;i++){
        cin>>n;
        if(!fuck[n]){
            fuck[n]=true;
            cnt++;
        }
    }
    cout<<4-cnt<<endl;
    return 0;
}
