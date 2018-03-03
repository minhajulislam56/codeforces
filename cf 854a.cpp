#include<bits/stdc++.h>
using namespace std;
bool coprime(int a, int b)
{
    int temp;
    while(a!=0){
        temp=a;
        a=b%temp;
        b=temp;
    }
    if(b==1)
        return true;
    else
        return false;

}
int main()
{
    int n, a, b;
    cin>>n;
    if(n%2){
        a=n/2;
        b=a+1;
    }
    else
        a=b=n/2;

    while(a!=1){
        if(coprime(a,b)){
            cout<<a<<" "<<b<<endl;
            return 0;
        }
        else{
            a--;
            b++;
        }
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
