#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string st;
    cin>>n>>st;

    if(n%2){
        cout<<"No"<<endl;
        return 0;
    }
    stack<char> stck;
    for(int i=0;i<n;i++){
        if(stck.empty()){
            stck.push(st[i]);
            continue;
        }
        if(st[i]==')' && stck.top()=='('){
            stck.pop();
        }
        else stck.push(st[i]);
    }
    if(stck.empty()) cout<<"Yes"<<endl;
    else if(stck.size()>2) cout<<"No"<<endl;
    else{
        char ch=stck.top();
        stck.pop();
        if(stck.top()!=ch) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
