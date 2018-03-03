#include<bits/stdc++.h>
using namespace std;
int main()
{
    string br;
    cin>>br;

    stack<char> chk;
    int cnt=0;
    for(int i=0;i<br.size();i++){
        if(!chk.empty()){
            if(chk.top()==br[i]){
                chk.push(br[i]);
            }
            else{
                chk.pop();
                cnt++;
            }
        }
        else{
            if(br[i]=='(')
                chk.push(br[i]);
        }
    }
    cout<<cnt*2<<endl;

    return 0;
}
