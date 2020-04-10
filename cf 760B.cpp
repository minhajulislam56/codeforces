#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin>>n>>m>>k;

    int fs=1, rem=m-n;
    if(rem) fs++, rem--;
    for(int i=2;rem;i++){
        int cut=1;

        if(k-i>=0) cut+=i-1;
        else cut+=k-1;

        if(k+i<=n) cut+=i-1;
        else cut+=n-k;
        if(cut<=rem) rem-=cut, fs++;
        else break;
    }

    cout<<fs<<endl;

    return 0;
}
