#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, num, p1=-1,p2=-1,p3=-1,cnt=0;
    char ch;
    cin>>n;
    while(n--){
        cin>>ch>>num;
        (ch=='&')?(p1==-1)?(p1=num) && cnt++:p1=p1&num:(ch=='|')?(p2==-1)?(p2=num) && cnt++:p2=p2|num:(p3==-1)?(p3=num) && cnt++:p3=p3^num;
    }
    p1==0?cnt--:p2==0?cnt--:p3==0?cnt--:ch='f';
    cout<<cnt<<endl;
    if(p1!=-1 && cnt!=0) cout<<"& "<<p1<<endl;
    if(p2!=-1 && cnt!=0) cout<<"| "<<p2<<endl;
    if(p3!=-1 && cnt!=0) cout<<"^ "<<p3<<endl;
    return 0;
}
