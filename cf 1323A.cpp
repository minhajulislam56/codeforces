#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]%2==0){
            cout<<1<<endl<<1<<endl;
        }
        else if(n>1){
            if(arr[1]%2==0) cout<<1<<endl<<2<<endl;
            else cout<<2<<endl<<"1 2"<<endl;
        }
        else cout<<-1<<endl;

    }

    return 0;
}
