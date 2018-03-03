#include<bits/stdc++.h>
using namespace std;
map<long long int, bool> mp;
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;

    long double vec[n+5];
    int cnt=0;
    for(int i=1;i<=n;i++){
        cin>>vec[i];
        if(!mp[vec[i]]){
            mp[vec[i]]=true;
            cnt++;
        }
    }
    if(cnt==2){
        cout<<"YES"<<endl;
        return 0;
    }
    if(cnt==1){
        cout<<"NO"<<endl;
        return 0;
    }
    if(cnt==3 && (vec[1]-vec[2])!=(vec[2]-vec[3])){
        cout<<"YES"<<endl;
        return 0;
    }
    double sl[n+5][n+5];
    double temp=(vec[1]-vec[2])/(1-2);
    bool smark=true;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j)
                continue;
            sl[i][j]=((vec[i]-vec[j])/(i-j));
            if(temp!=sl[i][j])
                smark=false;
        }
    }
    if(smark){
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i=1;i<=1;i++){
        for(int j=1;j<=n;j++){
            if(i!=j){
                double xx=sl[i][j];
                bool mark, fmark;
                fmark=true;
                for(int p=i+1;p<=n;p++){
                    mark=true;
                    for(int q=1;q<=n;q++){
                        if(p!=q){
                            if(xx==sl[p][q])
                                mark=false;
                        }
                    }
                    if(mark){
                        fmark=false;
                        break;
                    }
                }
                if(fmark){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<"NO"<<endl;
    return 0;
}
