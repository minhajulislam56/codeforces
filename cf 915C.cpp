#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n2;
    string n1;
    cin>>n1>>n2;
    sort(n1.begin(),n1.end());
    for(int i=0;i<n1.length();i++){
        for(int j=i+1;j<n1.length();j++){
            string tmp=n1;
            swap(tmp[i],tmp[j]);
            sort(tmp.begin()+i+1,tmp.end());
            long long x,y;
            sscanf(tmp.c_str(),"%lld",&x);
            sscanf(n1.c_str(),"%lld",&y);
            if(x>y && x<=n2)
                swap(n1[i],n1[j]);
        }
    }
    cout<<n1<<endl;

    return 0;
}
