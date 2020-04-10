#include<bits/stdc++.h>
using namespace std;
int xx[]={-1,-2,-2,-1,+1,+2,+2,+1};
int yy[]={-2,-1,+1,+2,+2,+1,-1,-2};
int n;
char box[110][110];
bool fg[110][110];
bool isValid(int x,int y)
{
    if(x<n && x>=0 && y<n && y>=0) return true;
    return false;
}
void plc(int a, int b, char ch)
{
    box[a][b]=ch;
    fg[a][b]=true;
    for(int k=0;k<8;k++){
        if(isValid(a+xx[k], b+yy[k]) && !fg[a+xx[k]][b+yy[k]]){
            plc(a+xx[k], b+yy[k], ch=='W'?'B':'W');
        }
    }
}
int main()
{
    cin>>n;

    char ch='B';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!fg[i][j]){
                plc(i,j,'W');
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<box[i][j];
        }
        cout<<endl;
    }

    return 0;
}
