#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        int k=INT_MAX;
        for(int i=0;i<n;i++){
            if(st[i]=='1'){
                k=min(k,i);
                break;
            }
        }
        for(int i=st.length()-1;i>=0;i--){
            if(st[i]=='1'){
                k=min(k,n-1-i);
                break;
            }
        }

        if(k==INT_MAX) cout<<n<<endl;
        else cout<<(n-k)*2<<endl;
    }

    return 0;
}
