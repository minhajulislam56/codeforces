#include<bits/stdc++.h>
using namespace std;
long long distance(long long x1,long long y1, long long x2, long long y2)
{
    return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}
int main()
{
    long long ax, ay,bx, by,cx, cy;

    cin>>ax>>ay>>bx>>by>>cx>>cy;

    ((by-ay)*(cx-bx)==(bx-ax)*(cy-by) || distance(ax,ay,bx,by)!=distance(bx,by,cx,cy))?cout<<"NO"<<endl:cout<<"YES"<<endl;


    return 0;
}
