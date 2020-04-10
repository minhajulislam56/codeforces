#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,g,n;
    cin>>b>>g>>n;

    if(b>=n && g>=n) cout<<n+1<<endl;
    else if(b>=n || g>=n) cout<<min(b,g)+1<<endl;
    else {
        if(b>g){
            cout<<g-(n-b)+1<<endl;
        }
        else{
            cout<<b-(n-g)+1<<endl;
        }
    }

    return 0;
}
