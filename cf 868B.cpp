#include<bits/stdc++.h>
using namespace std;
bool mark;
int main()
{
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;

    m/=5.0;
    s/=5.0;
    mark=true;
    if(t1>t2)
        swap(t1,t2);
    int fuck=0;
    if(h>=t1 && h<t2) fuck++;
    if(m>=t1 && m<t2) fuck++;
    if(s>=t1 && s<t2) fuck++;

    /*if((h>=t1 && h<t2) || (m>=t1 && m<t2) || (s>=t1 && s<t2)){
        mark=false;
    }
    if(mark){
        cout<<"YES"<<endl;
        return 0;
    }
    mark=true;
    if((h>t2 && h<=12.0) || (h>=0.0 && h<=t1) || (m>t2 && m<=12.0) || (m>=0.0 && m<=t1) || (s>t2 && s<=12.0) || (s>=0.0 && s<=t1)){
        mark=false;
    }*/

    (fuck==3|| fuck==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;


    return 0;
}
