#include<bits/stdc++.h>
using namespace std;
int mark[100007];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> vec;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
        mark[x]++;
    }
    sort(vec.rbegin(),vec.rend());

    int fm=vec[0], sm=-1;
    for(int i=0;i<n;i++){
        if(fm!=vec[i]){
            sm=vec[i];
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(mark[vec[i]]%2){
            cout<<"Conan"<<endl;
            return 0;
        }
    }
    if(mark[fm]%2){
        cout<<"Conan"<<endl;
    }
    else{
        if(mark[sm]%2 && sm!=-1)
            cout<<"Conan"<<endl;
        else
            cout<<"Agasa"<<endl;
    }

    return 0;
}
