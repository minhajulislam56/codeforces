#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    vector<int> buc;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        buc.push_back(x);
    }
    sort(buc.rbegin(),buc.rend());

    for(int i=0;i<n;i++){
        if(k%buc[i]==0){
            cout<<k/buc[i]<<endl;
            return 0;
        }
    }
    cout<<k<<endl;


    return 0;
}

