#include<bits/stdc++.h>
using namespace std;
bool f[1007];
void fib()
{
    f[1]=1, f[2]=1;
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    while(true){
        int xx=vec[vec.size()-1]+vec[vec.size()-2];
        if(xx>1000) break;
        f[xx]=true;
        vec.push_back(xx);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    fib();
    for(int i=1;i<=n;i++){
        f[i]?cout<<"O":cout<<"o";
    }
    cout<<endl;


    return 0;
}
