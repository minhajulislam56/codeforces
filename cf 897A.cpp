#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string st;
    cin>>st;

    int l,r;
    char c1, c2;
    while(m--){
        cin>>l>>r>>c1>>c2;

        for(int i=l-1;i<r && i<st.length();i++){
            if(st[i]==c1)
                st[i]=c2;
        }
    }
    cout<<st<<endl;

    return 0;
}
