#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--){
        long long k, tmp=0;
        cin>>k;
        for(int i=0;;i++){
            if(tmp>=k) break;
            tmp+=(long long) pow(3,i);
        }
        int i=0;
        while(true){
            long long dd=(long long) pow(3,i);
            i++;
            if(tmp-dd>=k) tmp-=dd;
            else break;
        }
        cout<<tmp<<endl;
    }

    return 0;
}
