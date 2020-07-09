#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        queue<int> odd, even;
        for(int i=0;i<2*n;i++){
            int x;
            cin>>x;
            if(x%2) odd.push(i+1);
            else even.push(i+1);
        }
        int cnt=0;
        while(odd.size()>1 && cnt<n-1){
            cout<<odd.front()<<" ";
            odd.pop();
            cout<<odd.front()<<endl;
            odd.pop();
            cnt++;
        }
        while(even.size()>1 && cnt<n-1){
            cout<<even.front()<<" ";
            even.pop();
            cout<<even.front()<<endl;
            even.pop();
            cnt++;
        }
    }

    return 0;
}


