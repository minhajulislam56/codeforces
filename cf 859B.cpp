#include<bits/stdc++.h>
using namespace std;

bool perfectSquare(int number)
{
    double f=sqrt(number);
    number=f;
    if(number==f)
        return true;
    else
        return false;
}
int main()
{
    long long int n;
    cin>>n;
    if(perfectSquare(n)){
        int p=sqrt(n);
        cout<<p*4<<endl;
        return 0;
    }
    double de=sqrt(n);
    int in=de;
    int mark=(de*10.0)-(in*10);

    if(mark<5){
        cout<<in*4+2<<endl;
    }
    else{
        in++;
        cout<<in*4<<endl;
    }

    return 0;
}
