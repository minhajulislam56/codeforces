#include<bits/stdc++.h>
using namespace std;
bool mark[200];
int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    int cnt=0, maxx=INT_MIN;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            if(!mark[s[i]]){
                cnt++;
                mark[s[i]]=true;
            }
        }
        else{
            memset(mark,false,sizeof mark);
            if(cnt>maxx) maxx=cnt;
            cnt=0;
        }
    }
    if(cnt>maxx) maxx=cnt;
    cout<<maxx<<endl;

    return 0;
}
