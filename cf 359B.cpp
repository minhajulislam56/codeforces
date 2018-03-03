#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;

    for(int i=1;i<=2*n;i+=2){
        if(k){
            cout<<i<<" "<<i+1<<" ";
            k--;
        }
        else{
            cout<<i+1<<" "<<i<<" ";
        }
    }


    return 0;
}
