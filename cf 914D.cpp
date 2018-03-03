#include<bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd(a,b)
long long int arr[500009], tree[2000009], md, mnode=1,ans;
void segment(int node, int b, int e)
{
    if(b==e){
        tree[node]=arr[b];
        return;
    }
    long long int left,right,mid;
    left=node*2;
    right=node*2+1;
    mid=(b+e)/2;
    segment(left,b,mid);
    segment(right,mid+1,e);
    //mnode=max(mnode,left);
    tree[node]=gcd(tree[left],tree[right]);
}
void query(int node, int b, int e, int i, int j)
{
    if(i>e || j<b)
        return;
    if(b>=i && e<=j){
        if(tree[node]%md==0)
            return;
        else{
            while(node<mnode){
                if(tree[node*2]%md && tree[(node*2)+1]%md){
                    ans+=2;
                    return;
                }
                if(tree[node*2]%md){
                    node=node*2;
                }
                else{
                    node=(node*2)+1;
                }
            }
            ans++;
            return;
        }

    }
    long long int left,right,mid;
    left=node*2;
    right=node*2+1;
    mid=(b+e)/2;
    query(left,b,mid,i,j);
    if(ans>1)
        return;
    query(right,mid+1,e,i,j);
}
void update(int node,int b, int e, int i, int num)
{
    if(i>e || i<b)
        return;
    if(b==e && b==i){
        tree[node]=num;
        return;
    }
    int left,right,mid;
    left=node*2;
    right=node*2+1;
    mid=(b+e)/2;
    update(left,b,mid,i,num);
    update(right,mid+1,e,i,num);
    tree[node]=gcd(tree[left],tree[right]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    while(mnode<n)
        mnode*=2;
    segment(1,1,n);
    cin>>q;
    while(q--){
        int t;
        cin>>t;
        if(t==1){
            int l,r;
            cin>>l>>r>>md;
            ans=0;
            query(1,1,n,l,r);
            ans>1?cout<<"NO"<<endl:cout<<"YES"<<endl;
        }
        else{
            long long int pos,val;
            cin>>pos>>val;
            update(1,1,n,pos,val);
        }
    }

    return 0;
}
