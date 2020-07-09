#include<bits/stdc++.h>
using namespace std;
bool is_prime(long long n)
{
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        long long n;
        cin>>n;
        if(n==1) cout<<"FastestFinger"<<endl;
        else if(n%2 || n==2) cout<<"Ashishgup"<<endl;
        else{
            bool p1=true;
            for(int i=1; ;i++){
                long long val=(2<<i);
                if(val==n){
                    p1=false;
                    break;
                }
                if(val>n) break;
            }
            if(n%4 && is_prime(n/2)) p1=false;
            cout<<(p1?"Ashishgup":"FastestFinger")<<endl;
        }
    }

    return 0;
}

