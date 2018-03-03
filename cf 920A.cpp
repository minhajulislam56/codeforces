#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        int minn=-1;
        vector<int> line;
        for(int i=1;i<=k;i++){
            int x;
            cin>>x;
            line.push_back(x);
        }
        if(k==1){
            minn=max(line[0]-1+1,n-line[0]+1);
        }
        else{
            minn=max(line[0]-1+1,minn);
            minn=max(n-line[k-1]+1,minn);
            for(int i=0;i<line.size()-1;i++){
                int xx=(line[i+1]-line[i]+1)/2;
                if((line[i+1]-line[i]+1)%2) xx++;
                minn=max(xx,minn);
            }
        }
        cout<<minn<<endl;

    }


    return 0;
}
