#include<bits/stdc++.h>
using namespace std;
bool fg[100002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int m=n;
    for(int i=0;i<n;i++){
        fg[v[i]]=true;
        while(fg[m]){
            cout<<m<<" ";
            m--;
        }
        cout<<endl;
    }


    return 0;
}
