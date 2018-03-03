#include<bits/stdc++.h>
using namespace std;
#define PMX 1000000
#define LL long long
int marked[PMX/64 + 2];
vector<LL> primes;
#define mark(x) marked[x >> 6] |= (1 << ((x & 63) >> 1))
#define check(x) (marked[x >> 6] & (1 << ((x & 63) >> 1)))

bool isPrime(LL x)
{
	return (x > 1) && ((x == 2) || ((x & 1) && (!(check(x)))));
}

void seive(LL n)
{
	LL i, j;
	for(i = 3; i * i <= n; i += 2) if(!check(i)) for(j = i * i; j <= n; j += i << 1) mark(j);
	primes.push_back(2);
	for(i = 3; i <= n; i += 2) if(isPrime(i)) primes.push_back(i);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    seive(1000007);
    LL p,y,ans;
    cin>>p>>y;

    for(LL j=y;j>p;j--){
        bool fg=true;
        for(int i=0;primes[i]<=p && i<primes.size();i++){
            if(j%primes[i]==0)
                fg=false;
            else if((primes[i]*primes[i])<=j && j%(primes[i]*primes[i])==0)
                fg=false;
        }
        if(fg){
            cout<<j<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
