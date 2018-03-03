#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, hh, mm, ans=0;
    cin>>x>>hh>>mm;
    if(hh==07 || hh==17){
        cout<<ans<<endl;
        return 0;
    }
    while(true){
        if(mm==7||mm==17||mm==27||mm==37||mm==47||mm==57)
            break;
        mm-=x;
        ans++;
        if(mm<0){
            mm+=60;
            hh-=1;
            if(hh<0) hh=23;
            if(hh==07 || hh==17)
                break;
        }
    }
    cout<<ans<<endl;

    return 0;
}
