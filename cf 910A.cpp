#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n, d;
    cin>>n>>d;
    string st;
    cin>>st;
    int jump=0;
    for(int i=0;i<n; ){
        int j=i+d;
        if(j>=n-1){
            jump++;
            break;
        }
        while(st[j]!='1'){
            j--;
            if(j==i){
                cout<<-1<<endl;
                return 0;
            }
        }
        i=j;
        jump++;
    }
    cout<<jump<<endl;

    return 0;
}

