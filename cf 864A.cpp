#include<bits/stdc++.h>
using namespace std;
int store[105];
bool flag[105];
int main()
{
    int n, num, cnt=0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>num;
        store[num]++;
        if(!flag[num]){
            flag[num]=true;
            v.push_back(num);
        }
    }
    if(v.size()==2 && store[v[0]]==store[v[1]])
        cout<<"YES"<<endl<<v[0]<<" "<<v[1]<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
