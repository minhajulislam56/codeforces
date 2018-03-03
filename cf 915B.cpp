#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,pos,l,r,ans;
    cin>>n>>pos>>l>>r;

    if(l==1 && r==n){
        cout<<0<<endl;
    }
    else if(l!=1 && r==n){
        ans=abs(l-pos)+1;
        cout<<ans<<endl;
    }
    else if(l==1 && r!=n){
        ans=abs(r-pos)+1;
        cout<<ans<<endl;
    }
    else{
        if(abs(l-pos)<abs(r-pos)){
            ans=abs(l-pos)+(r-l)+2;
            //ans+=abs(r-pos)+2;
        }
        else{
            ans=abs(r-pos)+(r-l)+2;
            //ans+=abs(l-pos)+2;
        }
        cout<<ans<<endl;
    }


    return 0;
}

