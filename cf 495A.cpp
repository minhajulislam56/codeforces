#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string st;
    cin>>st;
    int arr[]={2,7,2,3,3,4,2,5,1,2};
    if(st.length()==2){
        int x=st[0]-'0';
        int y=st[1]-'0';
        cout<<arr[x]*arr[y]<<endl;
    }
    else
        cout<<arr[st[0]-'0']<<endl;
    return 0;
}
