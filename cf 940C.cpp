#include<bits/stdc++.h>
using namespace std;
bool mark[100];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,k;
    cin>>n>>k;
    int mx=0,mn=200;
    string st;
    for(int i=0;i<n;i++){
        char s;
        cin>>s;
        mx=max(mx,(int)s);
        mn=min(mn,(int)s);
        mark[(int)s]=true;
        st+=s;
    }
    if(k>n){
        for(int i=0;i<k;i++){
            if(i>=n) cout<<(char)mn;
            else cout<<st[i];
        }
        cout<<endl;
        return 0;
    }
    int pos;
    for(int i=0;i<k;i++){
        if(st[i]<mx) pos=i;
    }
    bool fg=false;
    for(int i=0;i<k;i++){
        if(fg){
            cout<<(char)mn;
            continue;
        }
        else{
            if(i==pos){
                for(int j=st[i]+1;j<='z';j++){
                    if(mark[j]){
                        cout<<(char)j;
                        fg=!fg;
                        break;
                    }
                }
            }
            else
                cout<<st[i];
        }
    }
    cout<<endl;


    return 0;
}
