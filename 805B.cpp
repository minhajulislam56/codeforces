#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0,j=0;i<n;i++){
        if(j<2){
            cout<<"a" && j++;
        }
        else{
            cout<<"b" && j++;
            if(j==4)
                j=0;
        }
    }

    return 0;
}
