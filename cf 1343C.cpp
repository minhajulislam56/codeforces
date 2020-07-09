#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        long long arr[n+5];
        for(int i=0;i<n;i++) cin>>arr[i];

        long long psum=0, nsum=0;
        int cn1=0, cn2=0;
        bool fg=true;
        int i=0;
        while(i<n){
            if(fg){
                int j=i;
                long long mx=-LLONG_MAX;
                while(arr[j]<0) j++;
                while(arr[j]>0 && j<n){
                    mx=max(mx, arr[j]);
                    j++;
                }
                cn1++;
                psum+=mx;
                fg=!fg;
                i=j;
            }
            else{
                int j=i;
                long long mx=-LLONG_MAX;
                while(arr[j]>0) j++;
                while(arr[j]<0 && j<n){
                    mx=max(mx, arr[j]);
                    j++;
                }
                cn1++;
                psum+=mx;
                fg=!fg;
                i=j;
            }
        }
        fg=false;
        i=0;
        while(i<n){
            if(fg){
                int j=i;
                long long mx=-LLONG_MAX;
                while(arr[j]<0) j++;
                while(arr[j]>0 && j<n){
                    mx=max(mx, arr[j]);
                    j++;
                }
                cn2++;
                nsum+=mx;
                fg=!fg;
                i=j;
            }
            else{
                int j=i;
                long long mx=-LLONG_MAX;
                while(arr[j]>0) j++;
                while(arr[j]<0 && j<n){
                    mx=max(mx, arr[j]);
                    j++;
                }
                cn2++;
                nsum+=mx;
                fg=!fg;
                i=j;
            }
        }
        if(cn1>cn2) cout<<psum<<endl;
        else if(cn2>cn1) cout<<nsum<<endl;
        else cout<<max(psum, nsum)<<endl;
    }

    return 0;
}

