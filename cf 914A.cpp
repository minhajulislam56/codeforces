#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    sort(vec.rbegin(),vec.rend());
    for(int i=0;i<n;i++){
        int xx=sqrt(vec[i]);
        if((xx*xx)!=vec[i]){
            ans=vec[i];
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}
