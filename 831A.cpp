#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    bool big, cons, sm, val;
    big=cons=sm=val=true;
    int curr=arr[0];

    for(int i=1;i<n;i++){
        if(big){
            if(curr==arr[i]){
                big=false;
            }
            if(curr>arr[i]){
                big=cons=false;
            }
            curr=arr[i];
            continue;
        }
        if(cons){
            if(curr>arr[i]){
                cons=false;
            }
            if(curr<arr[i]){
                val=false;
                goto print;
            }
            curr=arr[i];
            continue;
        }
        if(sm){
            if(curr==arr[i]){
                val=false;
                goto print;
            }
            if(curr<arr[i]){
                val=false;
                goto print;
            }
        }
        curr=arr[i];
    }

    print:
        if(val)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    return 0;
}
