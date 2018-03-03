#include<bits/stdc++.h>
using namespace std;

template <typename T>
std::string to_string(T const& value) {
    stringstream sstr;
    sstr << value;
    return sstr.str();
}

int main()
{
    string st;
    cin>>st;
    double res=0;

    for(int i=0;i<st.length();i++){

        string tp;
        while(st[i]>='0' && st[i]<='9' || st[i]=='.'){
            tp.push_back(st[i]);
            i++;
        }
        double temp;
        if(tp[tp.length()-3]=='.'){
            temp=0.0;
            int j;
            for(j=0;j<tp.length()-2;j++){
                if(tp[j]!='.')
                    temp=temp*10.0+(tp[j]-'0'+0.0);
            }
            double ftemp=0;
            while(j<tp.length()){
                ftemp=ftemp*10.0+(tp[j++]-'0'+0.0);
            }
            ftemp/=100.0;
            temp+=ftemp;
            //cout<<temp<<endl;
            res+=temp;
        }
        else{
            temp=0.0;
            for(int j=0;j<tp.length();j++){
                if(tp[j]!='.')
                    temp=temp*10.0+(tp[j]-'0'+0.0);
            }
            res+=temp;
            //cout<<temp<<endl;
        }
    }
    char va[100001], fa[100001];
    sprintf(va,"%.2lf",res);
    bool mark=false;
    int i=0;

    while(va[i]!='\0')
        i++;
    int k=0;
    for(int j=i-1,s=-1;j>=0;j--){
        if(va[j]=='.') mark=true;
        if(mark){
            if(s!=0 && s%3==0)
                fa[k++]='.';
            fa[k++]=va[j];
            s++;
        }
        else{
            fa[k++]=va[j];
        }
    }
    bool chk=true;
    if(fa[0]=='0' && fa[1]=='0'){
        for(int fuck=k-1;fuck>2;fuck--){
            cout<<fa[fuck];
        }
    }
    else{
        for(int fuck=k-1;fuck>=0;fuck--){
            cout<<fa[fuck];
        }
    }
    cout<<endl;


    return 0;
}
