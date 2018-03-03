#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,l;
    cin>>n>>d>>l;

    n-=1;
    vector<int> vec;
    while(n--){
        if(d>0){
            vec.push_back(l);
            d=l-d;
        }
        else{
            vec.push_back(1);
            d=1-(d);
        }
    }
    if(d>0 && d<=l){
        vec.push_back(d);
        for(int i=0;i<vec.size();i++)
            cout<<vec[i]<<" ";
    }
    else
        cout<<-1<<endl;

    return 0;
}
