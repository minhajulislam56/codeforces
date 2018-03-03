#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> stk;
    cin.ignore();
    while(n--){
        string in;
        getline(cin,in);
        if(in=="pwd"){
            cout<<"/";
            for(int i=0;i<stk.size();i++)
                cout<<stk[i]<<"/";
            cout<<endl;
        }
        else{
           string str;
           for(int i=3;i<in.size();i++){
                if(in[i]=='/' && i==3){
                    stk.clear();
                    continue;
                }
                if(in[i]=='/'){
                    if(str!=""){
                        if(str=="..")
                            stk.pop_back();
                        else
                            stk.push_back(str);
                        str="";
                    }
                }
                else{
                    str+=in[i];
                }
           }
           if(str!=""){
                if(str=="..")
                    stk.pop_back();
                else
                    stk.push_back(str);
                str="";
           }
        }

    }

    return 0;
}
