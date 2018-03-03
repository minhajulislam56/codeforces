#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector<int> ze,on;
    string st;
    cin>>st;
    for(int i=0;i<st.size();i++){
        if(st[i]=='1')
            on.push_back(i+1);
        else
            ze.push_back(i+1);
    }
    if(on.size()==0 || ze.size()==0){
        cout<<0<<endl;
        return 0;
    }
    if(on.size()==ze.size()){
        cout<<on.size()*2<<endl;
        return 0;
    }
    if(on.size()>ze.size()){
        int tot,base,curr,maxx;

        maxx=INT_MIN;
        for(int i=0,k=ze.size();i<ze.size()-1;i++,k--){

            base=ze[i];
            tot=k;

            for(int j=ze.size()-1;ze[j]>ze[i];j--){
                curr=ze[j];
                if((curr-base-1)<=((tot*2)-2)){
                    if((tot*2)>maxx)
                        maxx=tot*2;
                }
                else
                    tot--;
            }
        }
        if(maxx<0)
            cout<<2<<endl;
        else
            cout<<maxx<<endl;
        return 0;
    }
    if(ze.size()>on.size()){
        int tot,base,curr,maxx;

        maxx=INT_MIN;
        for(int i=0,k=on.size();i<on.size()-1;i++,k--){

            base=on[i];
            tot=k;

            for(int j=on.size()-1;on[j]>on[i];j--){
                curr=on[j];
                if((curr-base-1)<=((tot*2)-2)){
                    if((tot*2)>maxx)
                        maxx=tot*2;
                }
                else
                    tot--;
            }
        }
        if(maxx<0)
            cout<<2<<endl;
        else
            cout<<maxx<<endl;
        return 0;
    }

    return 0;
}

