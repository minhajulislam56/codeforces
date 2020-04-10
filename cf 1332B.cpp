#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> v(n);
        int nm[50], cnt=1;
        memset(nm, 0, sizeof nm);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            for(int j=2;j<=sqrt(x);j++){
                if(x%j==0){
                    if(!nm[j]){
                        nm[j]=cnt++;
                    }
                    v[i]=nm[j];
                    break;
                }
            }
        }
        cout<<cnt-1<<endl;
        for(auto i:v) cout<<i<<" ";
        cout<<endl;
    }


    return 0;
}
