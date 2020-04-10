#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt=0;
    cin>>n;
    string st;
    cin>>st;

    for(int i=0;i<n-1;i+=2){
        if(st[i]==st[i+1]){
            cnt++;
            st[i] = (st[i]=='a'?'b':'a');
        }
    }
    cout<<cnt<<endl<<st<<endl;

    return 0;
}
