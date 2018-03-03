#include<bits/stdc++.h>
using namespace std;
//int xx[]={1,-1,0,0,1,-1,1,-1};
//int yy[]={0,0,1,-1,-1,-1,1,1};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    string st;
    cin>>st;
    int k,fi,se,cnt=0;
    cin>>k;
    for(int i=0;i<k;i++){
        char a,b;
        cin>>a>>b;
        fi=se=0;
        for(int j=0;j<st.length();j++){
            if(st[j]==a) fi++;
            else if(st[j]==b) se++;
            else{
                cnt+=min(fi,se);
                fi=se=0;
            }
        }
        cnt+=min(fi,se);
    }
    cout<<cnt<<endl;
    return 0;
}
