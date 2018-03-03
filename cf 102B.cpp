#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    cin>>num;
    int cnt=0;
    if(num.length()==1){
        cout<<cnt<<endl;
        return 0;
    }
    long long int sum=0;
    for(int i=0;i<num.length();i++){
        sum+=num[i]-'0';
    }
    cnt++;
    while(sum>9){
        long long int tmp=sum;
        sum=0;
        while(tmp){
            sum+=tmp%10;
            tmp/=10;
        }
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
