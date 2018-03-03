#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    for(int i=0;i<6;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }

    int sum,sum2;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(i==j)
                continue;
            for(int k=0;k<v.size();k++){
                if(k==j || k==i)
                    continue;
                sum=v[i]+v[j]+v[k];
                sum2=0;
                for(int l=0;l<v.size();l++){
                    if(l==i || l==j || l==k)
                        continue;
                    sum2+=v[l];
                }
                if(sum==sum2){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
