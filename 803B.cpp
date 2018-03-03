#include<bits/stdc++.h>
using namespace std;
int arr[200009];
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    queue <int> q;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            q.push(i);
        }
    }
    if(q.size()<2){
        int x=q.front();
        for(int i=0;i<=x;i++){
            cout<<x-i<<" ";
        }
        for(int i=x+1,k=1;i<n;i++)
            cout<<k++<<" ";
        cout<<endl;
        return 0;
    }

    int x=q.front();
    for(int i=0;i<=x;i++){
        cout<<x-i<<" ";
    }
    int k,y,mid;
    while(q.size()>1){
        x=q.front();
        q.pop();
        y=q.front();
        mid=(x+y)/2;
        k=1;
        for(int i=x+1;i<=mid;i++){
            cout<<k++<<" ";
        }
        k--;
        if((x+y)%2==0)
            k--;
        for(int i=mid+1;i<=y;i++){
            cout<<k--<<" ";
        }
    }
    for(int i=y+1,k=1;i<n;i++){
        cout<<k++<<" ";
    }
    cout<<endl;

    return 0;
}
