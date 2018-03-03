#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,p1,p2;
    cin>>a>>b;
    vector<long long int> vec;
    vec.push_back(b);
    while(b>=a){
        if(b==a){
            cout<<"YES"<<endl<<vec.size()<<endl;
            for(int i=vec.size()-1;i>=0;i--)
                cout<<vec[i]<<" ";
            return 0;
        }
        if(b%2==0){
            b=b/2;
            vec.push_back(b);
        }
        else{
            if(b%10 != 1){
                cout<<"NO"<<endl;
                return 0;
            }
            else{
                b=b/10;
                vec.push_back(b);
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
