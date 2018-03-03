#include<bits/stdc++.h>
using namespace std;
#define MAX 100002
int main()
{
        int k, n, arr[MAX], m=0;
        bool b[MAX];
        memset(b,0, sizeof(b));
        cin>>n;

        for(int i=2;i<=n+1;i++){
            if(b[i]==0){
                arr[i]=1;
                for(int j=i*2;j<=n+1;j+=i){
                    arr[j]=2;
                    b[j]=1;
                }
            }
        }
        int i;
        if(n>2)
            cout<<2<<endl;
        else
            cout<<1<<endl;
        for(i=2;i<=n;i++)
            cout<<arr[i]<<" ";
        cout<<arr[i]<<endl;

    return 0;
}
