#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<pair<string,int> > vec[n+5];
    int len;

    for(int i=0;i<n;i++){
        string st;
        cin>>st;
        len=st.size();
        vec[i].push_back(make_pair(st,0));
        for(int j=1;j<st.length();j++){
            string tmp;
            for(int k=1;k<st.length();k++){
                tmp.push_back(st[k]);
            }
            tmp.push_back(st[0]);
            st=tmp;
            vec[i].push_back(make_pair(tmp,j));
        }
    }
    int minn=INT_MAX, sum;

    for(int i=0;i<len;i++){
        sum=0;
        string cs=vec[0][i].first;
        sum+=vec[0][i].second;
        bool mark;
        for(int j=1;j<n;j++){
            mark=false;
            for(int k=0;k<len;k++){

                if(cs==vec[j][k].first){
                    sum+=vec[j][k].second;
                    mark=true;
                    break;
                }
            }
            if(!mark){
                cout<<-1<<endl;
                return 0;
            }
        }
        if(sum<minn)
            minn=sum;
    }

    cout<<minn<<endl;

    return 0;
}
