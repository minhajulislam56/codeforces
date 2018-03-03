#include<bits/stdc++.h>
using namespace std;
map<char,int> check;
int main()
{
    char ch;
    int n, cnt=0;
    cin>>n;
    while(n--){
        cin>>ch;
        if(!check[tolower(ch)]){
            cnt++;
            check[tolower(ch)]=1;
        }
    }
    if(cnt==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
