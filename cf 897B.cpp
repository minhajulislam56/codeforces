#include<bits/stdc++.h>
using namespace std;
#define LL unsigned long long
LL sum=0, num, p;
int main()
{
    ios_base::sync_with_stdio(false);
    int k;
    cin>>k>>p;

    for(int i=1;i<=k;i++){
        stringstream sst;
        sst << i;
        string st=sst.str(), fst;
        fst+=st;
        reverse(st.begin(),st.end());
        fst+=st;
        stringstream convert(fst);
        if ( !(convert >> num) )
            num = 0;
        sum=(sum+(num%p))%p;
    }
    cout<<sum<<endl;
    return 0;
}

