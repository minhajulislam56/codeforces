#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    int mnths[]={31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>n;
    int days[30];
    for(int i=0;i<n;i++){
        cin>>days[i];
    }
    bool leap=false, f;
    for(int i=0;i<12;i++){
        f=true;
        for(int j=0, k=i;j<n;j++, k++){
            if(k==12) k=0;
            if(days[j]==29 && k==1 && leap==false){
                leap=true;
                continue;
            }
            if(days[j]!=mnths[k]){
                f=false;
                break;
            }
        }
        if(f){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

