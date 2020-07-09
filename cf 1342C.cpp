#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int a, b, q, len;
        cin>>a>>b>>q;
        len=a*b;
        int psum[len+5];
        memset(psum, 0, sizeof psum);
        for(int i=1;i<=len;i++){
            psum[i]=psum[i-1];
            if((i%a)%b != (i%b)%a) psum[i]++;
        }
        while(q--){
            long long l, r, cnt, rem, x, y;
            cin>>l>>r;
            l--;
            cnt=l/len;
            rem=l%len;
            x=(psum[len]*1ll*cnt)+psum[rem];
            cnt=r/len;
            rem=r%len;
            y=(psum[len]*1ll*cnt)+psum[rem];
            cout<<y-x<<" ";
        }
        cout<<endl;
    }

    return 0;
}
