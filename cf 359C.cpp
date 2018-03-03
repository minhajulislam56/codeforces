#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
LL base[100007];
LL bigModulo(LL a,LL b,LL n){
    LL x=1,y=a;
    while(b > 0){
        if(b%2 == 1){
            x=(x*y)%n;
        }
        y = (y*y)%n;
        b /= 2;
    }
    return x%n;
}
int main()
{
    ios_base::sync_with_stdio(false);

    LL n,x;
    cin>>n>>x;
    LL sum=0;
    vector<LL> arr, vec;
    for(int i=0;i<n;i++){
        LL value;
        cin>>value;
        arr.push_back(value);
        sum+=value;
    }
    for(int i=0;i<n;i++)
        vec.push_back(sum-arr[i]);

    sort(vec.rbegin(),vec.rend());
    while(true){
        LL first=vec[vec.size()-1];
        int cnt=0;
        while(vec.size()>0 && vec[vec.size()-1]==first){
            cnt++;
            vec.pop_back();
        }
        if(cnt%x){
            cout<<bigModulo(x,min(first,sum),mod);
            break;
        }
        else{
            cnt=cnt/x;
            for(int i=0;i<cnt;i++)
                vec.push_back(first+1);
        }
    }

    return 0;
}
