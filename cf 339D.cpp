#include<bits/stdc++.h>
using namespace std;
int arr[200000], tree[200000];
void build(int b, int e, int n)
{
    if(b==e){
        tree[n]=arr[b];
        return;
    }
    int mid=(b+e)/2;
    build(b, mid, n*2);
    build(mid+1, e, n*2+1);
    tree[n]=tree[n*2]+tree[n*2+1];
}
void update(int b, int e, int n, int i, int v)
{
    if(i<b || i>e) return;
    if(b==e && b==i){
        tree[n]=v;
        return;
    }
    int mid=(b+e)/2;
    update(b, mid, n*2, i, v);
    update(mid+1, e, n*2+1, i, v);
    tree[n]=tree[n*2]+tree[n*2+1];
}
int query(int b, int e, int n, int i, int j)
{
    if(i>e || j<b) return 0;
    if(b>=i && e<=j) return tree[n];
    int mid=(b+e)/2;
    return query(b, mid, n*2, i, j) + query(mid+1, e, n*2+1, i, j);
}
int main()
{
    int n,m;
    cin>>n>>m;
    int len=(int)pow(2,n);
    for(int i=1;i<=len;i++)
        cin>>arr[i];
    build(1,len,1);
    while(m--){
        int a, p, b;
        cin>>a>>p>>b;
        if (a==1) update(1,len,1,p,b);
        else cout<<query(1,len,1,p,b)<<endl;
    }

    return 0;
}
