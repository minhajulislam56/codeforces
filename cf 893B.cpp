#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,6,28,120,496,2016,8128,32640,130816,523776,2096128};
    int n;
    cin>>n;

    for(int i=10;i>=0;i--){
        if(n%arr[i]==0){
            cout<<arr[i]<<endl;
            return 0;
        }
    }

    return 0;
}

