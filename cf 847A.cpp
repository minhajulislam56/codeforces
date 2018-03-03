#include<bits/stdc++.h>
using namespace std;
int li[110],ri[110];
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>li[i]>>ri[i];
    }

    int tmp=0;

    for(int i=1;i<=n;i++){
        if(li[i]==0){
            if(tmp!=0){
                li[i]=tmp;
                ri[tmp]=i;
            }
            tmp=i;
            while(ri[tmp]){
                tmp=ri[tmp];
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<li[i]<<" "<<ri[i]<<endl;

    return 0;
}
