#include<bits/stdc++.h>
using namespace std;
#define ULL unsigned long long
#define LL long long
#define PMX 1000000
int marked[PMX/64 + 2];
vector<ULL> primes;
#define mark(x) marked[x >> 6] |= (1 << ((x & 63) >> 1))
#define check(x) (marked[x >> 6] & (1 << ((x & 63) >> 1)))

bool isPrime(int x)
{
	return (x > 1) && ((x == 2) || ((x & 1) && (!(check(x)))));
}

void seive(ULL n)
{
	ULL i, j;
	for(i = 3; i * i <= n; i += 2) if(!check(i)) for(j = i * i; j <= n; j += i << 1) mark(j);
	primes.push_back(2);
	for(i = 3; i <= n; i += 2) if(isPrime(i)) primes.push_back(i);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    seive(100007);

    if(isPrime(n-1)){
        cout<<n-1<<" "<<n-1<<endl;
        for(int i=1;i+1<=n;i++,m--){
            cout<<i<<" "<<i+1<<" "<<1<<endl;
        }
    }
    else{
        int ledge=n;
        while(!isPrime(ledge))
            ledge++;
        cout<<ledge<<" "<<ledge<<endl;
        for(int i=1;i+1<=n-1;i++,m--){
            cout<<i<<" "<<i+1<<" "<<1<<endl;
        }
        cout<<n-1<<" "<<n<<" "<<ledge-n+2<<endl;
        m--;
    }
    while(m){
        for(int i=1;i<=n && m;i++){
            for(int j=i+2;j<=n && m;j++,m--){
                cout<<i<<" "<<j<<" "<<999999999<<endl;
            }
        }
    }

    return 0;
}
