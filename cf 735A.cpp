#include<bits/stdc++.h>
using namespace std;
bool obs[107];
int main()
{
    int n,k, gr, in;
    char ch;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>ch;
        if(ch=='#')
            obs[i+1]=true;
        if(ch=='G') gr=i+1;
        if(ch=='T') in=i+1;
    }
    if(gr>in) swap(gr,in);

    if((in-gr)%k==0){
        for(int i=gr;i<=in;i+=k){
            if(obs[i])
                goto fuck;
        }
        cout<<"YES"<<endl;
        return 0;
    }
    fuck:
    cout<<"NO"<<endl;

    return 0;
}
