#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n+5];
    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<=n;i++){
        int y=a[a[a[i]]];
        if(y==i){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
