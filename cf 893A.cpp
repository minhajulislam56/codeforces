#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool a=true, b=true, c=false;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1){
            if(a==true){
                c==true?c=false:c=true;
                b==true?b=false:b=true;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else if(x==2){
            if(b==true){
                c==true?c=false:c=true;
                a==true?a=false:a=true;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else{
            if(c==true){
                b==true?b=false:b=true;
                a==true?a=false:a=true;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
