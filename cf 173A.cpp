#include<bits/stdc++.h>
using namespace std;
int lcm( int a , int b )
{
    return a / __gcd(a,b) * b ;
}
int main()
{
    long long n,t;
    cin>>n;

    string sta, stb;
    cin>>sta>>stb;

    int lm=lcm(sta.size(),stb.size());

    int p=sta.size();
    int q=stb.size();
    int po=0,ni=0;
    for(int i=0;i<lm;i++){
        if(sta[i%p]!=stb[i%q])
            ((sta[i%p]=='R' && stb[i%q]=='S') || (sta[i%p]=='S' && stb[i%q]=='P') || (sta[i%p]=='P' && stb[i%q]=='R'))?po++:ni++;

    }
    ni*=n/lm;
    po*=n/lm;
    int rem=n%lm;

    for(int i=0;i<rem;i++){
        if(sta[i%p]!=stb[i%q])
            ((sta[i%p]=='R' && stb[i%q]=='S') || (sta[i%p]=='S' && stb[i%q]=='P') || (sta[i%p]=='P' && stb[i%q]=='R'))?po++:ni++;

    }

    cout<<ni<<" "<<po<<endl;

    return 0;
}
