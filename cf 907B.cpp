#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string st[20];

    for(int i=0;i<11;i++){
        getline(cin,st[i]);
    }
    int x,y;
    cin>>x>>y;
    x=x%3, y=y%3;;
    if(x==0) x=3;
    if(y==0) y=3;
    bool flag=true;
    if(x==1 && y==1){
        for(int i=0;i<=2;i++){
            for(int j=0;j<=2;j++){
                if(st[i][j]=='.'){
                    flag=false;
                    st[i][j]='!';
                }
            }
        }
    }
    else if(x==1 && y==2){
        for(int i=0;i<=2;i++){
            for(int j=4;j<=6;j++){
                if(st[i][j]=='.'){
                    flag=false;
                    st[i][j]='!';
                }
            }
        }
    }
    else if(x==1 && y==3){
        for(int i=0;i<=2;i++){
            for(int j=8;j<=10;j++){
                if(st[i][j]=='.'){
                    flag=false;
                    st[i][j]='!';
                }
            }
        }
    }
    else if(x==2 && y==1){
        for(int i=4;i<=6;i++){
            for(int j=0;j<=2;j++){
                if(st[i][j]=='.'){
                    flag=false;
                    st[i][j]='!';
                }
            }
        }
    }
    else if(x==2 && y==2){
        for(int i=4;i<=6;i++){
            for(int j=4;j<=6;j++){
                if(st[i][j]=='.'){
                    flag=false;
                    st[i][j]='!';
                }
            }
        }
    }
    else if(x==2 && y==3){
        for(int i=4;i<=6;i++){
            for(int j=8;j<=10;j++){
                if(st[i][j]=='.'){
                    flag=false;
                    st[i][j]='!';
                }
            }
        }
    }

    else if(x==3 && y==1){
        for(int i=8;i<=10;i++){
            for(int j=0;j<=2;j++){
                if(st[i][j]=='.'){
                    flag=false;
                    st[i][j]='!';
                }
            }
        }
    }
    else if(x==3 && y==2){
        for(int i=8;i<=10;i++){
            for(int j=4;j<=6;j++){
                if(st[i][j]=='.'){
                    flag=false;
                    st[i][j]='!';
                }
            }
        }
    }
    else if(x==3 && y==3){
        for(int i=8;i<=10;i++){
            for(int j=8;j<=10;j++){
                if(st[i][j]=='.'){
                    flag=false;
                    st[i][j]='!';
                }
            }
        }
    }

    if(flag){
        for(int i=0;i<=10;i++){
            if(i==3 || i==7) continue;
            for(int j=0;j<=10;j++){
                if(j==3 || j==7) continue;
                if(st[i][j]=='.')
                    st[i][j]='!';
            }
        }
    }
    for(int i=0;i<=10;i++){
        if(i==3 || i==7){
            cout<<endl;
            continue;
        }
        for(int j=0;j<=10;j++){
            if(j==3 || j==7){
                cout<<" ";
                continue;
            }
            cout<<st[i][j];
        }
        cout<<endl;
    }
    cout<<endl;


    return 0;
}

