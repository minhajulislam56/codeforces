#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[100],rst[100];
    gets(st);
    int cnt=0;
    int len=strlen(st);
    if(len==1){
        cout<<"YES"<<endl;
        return 0;
    }
    else if(len%2){
        for(int i=(len/2)-1,j=(len/2)+1;j<len;i--,j++){
            if(st[i]!=st[j])
                cnt++;
        }
        if(cnt<2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        for(int i=(len/2)-1,j=(len/2);j<len;i--,j++){
            if(st[i]!=st[j])
                cnt++;
        }
        (cnt==1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }


    return 0;
}
