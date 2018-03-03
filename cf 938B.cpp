#include<bits/stdc++.h>
using namespace std;
bool m[1000002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]=1;
    }
    int sum=0;
    for(int i=1,j=1000000;i<=j;i++,j--,sum++){
        if(m[i] || m[j]){
            if(m[i] && m[j] && i!=j) n-=2;
            else n--;
            if(!n){
                cout<<sum<<endl;
                return 0;
            }
        }
    }


    return 0;
}
