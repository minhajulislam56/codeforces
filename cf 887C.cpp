#include<bits/stdc++.h>
using namespace std;
vector<int> mat[10];
int x,tp;
bool chk1()
{
    int tmp1,tmp2;

    tmp1=mat[1][0], tmp2=mat[1][2];
    mat[1][0]=mat[6][1], mat[1][2]=mat[6][3];
    swap(tmp1,mat[2][0]);
    swap(tmp2,mat[2][2]);
    swap(tmp1,mat[3][0]);
    swap(tmp2,mat[3][2]);
    swap(tmp1,mat[6][0]);
    swap(tmp2,mat[6][2]);

    for(int i=1;i<=6;i++){
        tp=mat[i][0];
        for(int j=1;j<4;j++){
            if(tp!=mat[i][j])
                return false;
        }
    }
    return true;
}
bool chk2()
{
    int tmp1,tmp2;

    tmp1=mat[6][0], tmp2=mat[6][2];
    mat[6][0]=mat[1][0], mat[6][2]=mat[1][2];
    swap(tmp1,mat[3][0]);
    swap(tmp2,mat[3][2]);
    swap(tmp1,mat[2][0]);
    swap(tmp2,mat[2][2]);
    swap(tmp1,mat[1][0]);
    swap(tmp2,mat[1][2]);

    for(int i=1;i<=6;i++){
        tp=mat[i][0];
        for(int j=1;j<4;j++){
            if(tp!=mat[i][j])
                return false;
        }
    }
    return true;
}
bool chk3()
{
    int tmp1,tmp2;

    tmp1=mat[4][0], tmp2=mat[4][1];
    mat[4][0]=mat[2][0], mat[4][1]=mat[2][1];
    swap(tmp1,mat[6][0]);
    swap(tmp2,mat[6][1]);
    swap(tmp1,mat[5][0]);
    swap(tmp2,mat[5][1]);
    swap(tmp1,mat[2][0]);
    swap(tmp2,mat[2][1]);
    for(int i=1;i<=6;i++){
        tp=mat[i][0];
        for(int j=1;j<4;j++){
            if(tp!=mat[i][j])
                return false;
        }
    }
    return true;
}
bool chk4()
{
    int tmp1,tmp2;

    tmp1=mat[2][0], tmp2=mat[2][1];
    mat[2][0]=mat[4][0], mat[2][1]=mat[4][1];
    swap(tmp1,mat[5][0]);
    swap(tmp2,mat[5][1]);
    swap(tmp1,mat[6][0]);
    swap(tmp2,mat[6][1]);
    swap(tmp1,mat[4][0]);
    swap(tmp2,mat[4][1]);
    for(int i=1;i<=6;i++){
        tp=mat[i][0];
        for(int j=1;j<4;j++){
            if(tp!=mat[i][j])
                return false;
        }
    }
    return true;
}
int main()
{

    for(int i=1;i<=6;i++){
        for(int j=0;j<4;j++){
            cin>>x;
            mat[i].push_back(x);
        }
    }
    if(chk1()){
        cout<<"YES"<<endl;
    }
    else if(chk2()){
        cout<<"YES"<<endl;
    }
    else if(chk3()){
        cout<<"YES"<<endl;
    }
    else if(chk4()){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}
