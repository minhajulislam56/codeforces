#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
int main()
{
    int n,days,tmp,si,di;
    cin>>n;
    days=0;
    while(n--){
        cin>>si>>di;
        if(si-1>days){
            days+=si-days;
        }
        else{
            while(days>si-1){
                si+=di;
            }
            days+=si-days;
        }
    }
    cout<<days<<endl;

    return 0;
}
