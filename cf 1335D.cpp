#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> vec;
    vec.push_back({0,0});
    vec.push_back({3,1});
    vec.push_back({1,3});
    vec.push_back({2,6});
    vec.push_back({6,2});
    vec.push_back({4,4});
    vec.push_back({8,8});
    vec.push_back({7,5});
    vec.push_back({5,7});

    int tc;
    cin>>tc;
    while(tc--){
        int sud[10][10];

        for(int i=0;i<9;i++){
            string st;
            cin>>st;
            for(int j=0;j<9;j++){
                sud[i][j]=st[j]-'0';
            }
        }
        for(int i=0;i<9;i++){
            int x=vec[i].first, y=vec[i].second;
            if(sud[x][y]==1) sud[x][y]=2;
            else sud[x][y]=1;
        }

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<sud[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}
