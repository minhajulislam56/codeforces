#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string st;
    cin>>n>>st;

    int x=0,y=0,cnt=0;
    for(int i=0;i<n;i++){
        if(st[i]=='U') y++;
        else x++;

        if(x==y && x && y){
            if(i+1<n){
                if(st[i]==st[i+1]){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}
