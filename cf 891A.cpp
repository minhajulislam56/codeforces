#include<bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd(a,b)
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    while(cin>>n){
        int arr[n+5];
        int zero=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1) zero++;
        }
        if(zero){
            cout<<n-zero<<endl;
        }
        else{
            for(int i=1;i<n;i++){
                for(int j=0;j+i<n;j++){
                    arr[j]=gcd(arr[j],arr[j+1]);
                    if(arr[j]==1 && gcd(arr[j],arr[j+1])==1){
                        cout<<i+n-1;
                        return 0;
                    }
                }
            }
            cout<<-1<<endl;
        }
    }

    return 0;
}
