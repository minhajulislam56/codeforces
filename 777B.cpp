#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sher[n+1], mor[n+1];
    string n1, n2;
    cin>>n1>>n2;
    for(int i=0;i<n;i++)
        sher[i]=n1[i]-'0';
    for(int i=0;i<n;i++)
        mor[i]=n2[i]-'0';

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(sher[j]>sher[j+1]){
                swap(sher[j], sher[j+1]);
            }
            if(mor[j]<mor[j+1]){
                swap(mor[j], mor[j+1]);
            }
        }
    }

    int cn1, cn2;
    cn1=cn2=0;
    int chk1[1001]={0};

    for(int i=0,j=n-1;j>=0;j--){
        if(mor[i]>sher[j] && chk1[j]==0){
            cn1++;
            chk1[j]=1;
            i++;
        }
    }
    for(int i=0,j=n-1;j>=0;j--){
        cout<<mor[i]<<" "<<sher[j]<<endl;
        if(mor[i]<sher[j]){
            cn2++;
        }
        if(mor[i]==sher[j]){
            i++;
        }

    }
    cout<<cn2<<endl<<cn1<<endl;
    return 0;
}
