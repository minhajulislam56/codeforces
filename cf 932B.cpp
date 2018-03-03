#include<bits/stdc++.h>
using namespace std;
#define MAX 1000002
int arr[10][MAX],tree[10][4*MAX];
int func(int x)
{
    if(x<10) return x;
    int p=1;
    while(x){
        if(x%10) p=p*(x%10);
        x/=10;
    }
    func(p);
}
void solve()
{
    for(int i=1;i<MAX;i++){
        for(int j=1;j<=9;j++){
            if(j==func(i)){
                arr[j][i]++;
                break;
            }
        }
    }
}
void segment(int node, int b, int e,int n)
{
    if(b==e){
        tree[n][node]=arr[n][b];
        return;
    }
    int left,right,mid;
    left=node*2;
    right=node*2+1;
    mid=(b+e)/2;
    segment(left,b,mid,n);
    segment(right,mid+1,e,n);
    tree[n][node]=tree[n][left]+tree[n][right];
}
int query(int node, int b, int e, int i, int j,int n)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[n][node];
    int left,right,mid;
    left=node*2;
    right=node*2+1;
    mid=(b+e)/2;
    return query(left,b,mid,i,j,n)+query(right,mid+1,e,i,j,n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    for(int i=1;i<=9;i++)
        segment(1,1,MAX,i);
    int q;
    cin>>q;
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        cout<<query(1,1,MAX,l,r,k)<<endl;
    }

    return 0;
}
