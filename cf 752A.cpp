#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    int lane,md,row;
    lane=k/(m*2)+1;
    if(k%(m*2)==0){
        cout<<--lane<<" "<<m<<" "<<'R'<<endl;
        return 0;
    }
    md=k%(m*2);
    row=(md/2);
    if(md%2)
        row++;
    md=md%2;

    cout<<lane<<" "<<row<<" ";
    md?cout<<'L'<<endl:cout<<'R'<<endl;


    return 0;
}
