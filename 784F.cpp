#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int n,x,p;
    time_t t=time(&t);
    string s;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(int i=0;i<n-1;i++)
        cout<<arr[i]<<" ";

    while(t+2>time(NULL)){
        s="Fuck the Problemsetter";
    }

    cout<<arr[n-1]<<endl;
    //cout<<time(&t)<<endl<<time(&t)+2<<endl;

    return 0;
}
