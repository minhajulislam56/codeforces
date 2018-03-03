#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    if(n==k)
        cout<<-1<<endl;
    else{
        int temp=n-k;
        cout<<temp<<" ";
        for(int i=1;i<=n;i++){
            if(i!=temp)
                cout<<i<<" ";
        }
    }

    return 0;
}
