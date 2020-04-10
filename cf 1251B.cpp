#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int sum=0;
        bool od=false;
        for(int i=0;i<n;i++){
            string st;
            cin>>st;
            if(st.size()&1) od=true;
            for(auto j:st) sum+=j-48;
        }
        if(sum%2 && !od) n--;
        cout<<n<<endl;
    }

    return 0;
}
