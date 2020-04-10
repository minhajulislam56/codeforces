#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];
        int cnt=0;
        bool ans=(vec[0]==2048?true:false);
        while(true){
            sort(vec.begin(), vec.end());
            bool pa=false;
            for(int i=1;i<n;i++){
                if(vec[i]==2048 || vec[i-1]==2048) ans=true;
                if(ans) break;
                if(vec[i]==vec[i-1] && vec[i]!=-1){
                    vec[i]=vec[i]+vec[i-1];
                    vec[i-1]=-1;
                    pa=true;
                    break;
                }
            }
            if(ans || !pa) break;
        }
        cout<<(ans?"YES":"NO")<<endl;
    }

    return 0;
}
