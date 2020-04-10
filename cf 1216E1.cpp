#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string st="", mst="";

    //st+=to_string(curr);

    while(true){
        mst+=to_string(i);
        //st+=mst;
        if(mst.length()<n) n-=mst.length();
        else break;
    }
    //cout<<(long long) st.length()<<endl;
    cout<<mst[n-1]<<endl;
    return 0;
}
