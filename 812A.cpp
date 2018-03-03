#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l[5],s[5],r[5],p[5];
    bool ac=false;
    for(int i=0;i<4;i++)
        cin>>l[i]>>s[i]>>r[i]>>p[i];

    if(p[0] && !ac){
        if((l[0] || r[0] || s[0] || l[1] || s[2] || r[3]) && !ac)
            ac=true;
    }
    if (p[1] && !ac){
        if((l[1] || r[1] || s[1] || l[2] || s[3] || r[0]) && !ac)
            ac=true;
    }
    if(p[2] && !ac){
        if((l[2] || r[2] || s[2] || l[3] || s[0] || r[1]) && !ac)
            ac=true;
    }
    if(p[3] && !ac){
        if((l[3] || r[3] || s[3] || l[0] || s[1] || r[2]) && !ac)
            ac=true;
    }

    (ac)?cout<<"YES"<<endl:cout<<"NO"<<endl;

    return 0;
}
