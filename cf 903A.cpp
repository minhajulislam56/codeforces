#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int ck;
        bool mark=false;
        cin>>ck;
        if(ck%3==0) mark=true;
        for(int i=ck;i>=0;i-=3){
            if(i%7==0){
                mark=true;
                break;
            }
        }
        mark?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }

    return 0;
}
