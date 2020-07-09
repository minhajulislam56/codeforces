#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        int n=s.length();
        int arr[n+5], curr=0;
        for(int i=0;i<n;i++){
            if(s[i]=='-') arr[i]=--curr;
            else{
                if(curr<0) curr=0;
                arr[i]=++curr;
            }
        }
        long long res=n;
        for(int i=0;i<n;i++){
            if(arr[i]<0) res+=i+1;
        }
        cout<<res<<endl;
    }

    return 0;
}

