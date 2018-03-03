#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long int> vec;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int cnt=0;
    long long int minn=LLONG_MAX;
    for(int i=vec.size()-1;i>=0;i--){
        if(i<minn)
            cnt++;
        minn=min((i-vec[i]),minn);

    }
    cout<<cnt<<endl;

    return 0;
}
