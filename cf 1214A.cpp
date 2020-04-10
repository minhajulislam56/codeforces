#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,e;
    cin>>n>>d>>e;
    int minn=n;
    for(int i=0; ;i+=5){
        int x=i*e;
        if(x>n) break;
        minn=min(minn,(n-x)%d);
    }
    cout<<minn<<endl;

    return 0;
}
