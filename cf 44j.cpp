//NOT SOLVED!!
#include<bits/stdc++.h>
using namespace std;
bool chk[1010][1010];
int col[1010][1010];
bool mark[5];
int main()
{
    int n,m;
    cin>>n>>m;

    char trim[n+5][m+5];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>trim[i][j];
        }
    }
    for(int j=1;j<=max(n,m)/2+1; j++){

        if(n-j+1>=0){
            for(int i=1;i<=m;i++){
                if(trim[j][i]=='b' && chk[j][i]==false){
                    if(trim[j][i-1]=='w' && trim[j][i+1]=='w' && chk[j][i-1]==false && chk[j][i+1]==false){
                    chk[j][i-1]=chk[j][i]=chk[j][i+1]=true;

                    memset(mark,false, sizeof mark);
                    if(chk[j][i+2])
                        mark[col[j][i+2]]=true;
                    }
                    if(chk[j][i-2]){
                        mark[col[j][i-2]]=true;
                    }
                    if(chk[j-1][i]){
                        mark[col[j-1][i]]=true;
                    }
                    if(chk[j-1][i-1]){
                        mark[col[j-1][i-1]]=true;
                    }
                    if(chk[j-1][i+1]){
                        mark[col[j-1][i+1]]=true;
                    }
                    if(chk[j+1][i]){
                        mark[col[j+1][i]]=true;
                    }
                    if(chk[j+1][i-1]){
                        mark[col[j+1][i-1]]=true;
                    }
                    if(chk[j+1][i+1]){
                        mark[col[j+1][i+1]]=true;
                    }
                    int cd=1;
                    while(true){
                        if(mark[cd]==false){
                            col[j][i-1]=col[j][i]=col[j][i+1]=cd;
                            if(cd==1){
                                trim[j][i-1]=trim[j][i]=trim[j][i+1]='a';
                            }
                            else if(cd==2){
                                trim[j][i-1]=trim[j][i]=trim[j][i+1]='b';
                            }
                            else if(cd==3){
                                trim[j][i-1]=trim[j][i]=trim[j][i+1]='c';
                            }
                            else{
                                trim[j][i-1]=trim[j][i]=trim[j][i+1]='d';
                            }
                            break;
                        }
                        cd++;
                    }
                }
                if(trim[n-j+1][i]=='b' && chk[n-j+1][i]==false){
                    if(trim[n-j+1][i-1]=='w' && trim[n-j+1][i+1]=='w' && chk[n-j+1][i-1]==false && chk[n-j+1][i+1]==false){
                        chk[n-j+1][i-1]=chk[n-j+1][i]=chk[n-j+1][i+1]=true;

                        memset(mark,false, sizeof mark);
                        if(chk[n-j+1][i+2]){
                            mark[col[n-j+1][i+2]]=true;
                        }
                        if(chk[n-j+1][i-2]){
                            mark[col[n-j+1][i-2]]=true;
                        }
                        if(chk[n-j+1-1][i-1]){
                            mark[col[n-j+1][i-1]]=true;
                        }
                        if(chk[n-j+1+1][i-1]){
                            mark[col[n-j+1][i+1]]=true;
                        }
                        if(chk[n-j+1-1][i+1]){
                            mark[col[n-j+1][i-1]]=true;
                        }
                        if(chk[n-j+1+1][i+1]){
                            mark[col[n-j+1][i+1]]=true;
                        }
                        if(chk[n-j][i]){
                            mark[col[n-j][i]]=true;
                        }
                        if(chk[n-j-1][i]){
                            mark[col[n-j-1][i]]=true;
                        }
                        int cd=1;
                        while(true){
                            if(mark[cd]==false){
                                col[n-j+1][i-1]=col[n-j+1][i]=col[n-j+1][i+1]=cd;
                                if(cd==1){
                                    trim[n-j+1][i-1]=trim[n-j+1][i]=trim[n-j+1][i+1]='a';
                                }
                                else if(cd==2){
                                    trim[n-j+1][i-1]=trim[n-j+1][i]=trim[n-j+1][i+1]='b';
                                }
                                else if(cd==3){
                                    trim[n-j+1][i-1]=trim[n-j+1][i]=trim[n-j+1][i+1]='c';
                                }
                                else{
                                    trim[n-j+1][i-1]=trim[n-j+1][i]=trim[n-j+1][i+1]='d';
                                }
                                break;
                            }
                            cd++;
                        }
                    }
                }

            }
        }

        if(m-j+1>=0){
            for(int i=1;i<=n;i++){
                if(trim[i][j]=='b' && chk[i][j]==false){
                    if(trim[i-1][j]=='w' && trim[i+1][j]=='w' && chk[i-1][j]==false && chk[i+1][j]==false){
                        chk[i-1][j]=chk[i][j]=chk[i+1][j]=true;

                        memset(mark,false, sizeof mark);
                        if(chk[i-2][j]){
                            mark[col[i-2][j]]=true;
                        }
                        if(chk[i+2][j]){
                            mark[col[i+2][j]]=true;
                        }
                        if(chk[i][j+1]){
                            mark[col[i][j+1]]=true;
                        }
                        if(chk[i][j-1]){
                            mark[col[i][j-1]]=true;
                        }
                        if(chk[i-1][j-1]){
                            mark[col[i-1][j-1]]=true;
                        }
                        if(chk[i-1][j+1])
                            mark[col[i-1][j-1]]=true;
                        if(chk[i+1][j-1])
                            mark[col[i+1][j-1]]=true;
                        if(chk[i+1][j+1])
                            mark[col[i+1][j+1]]=true;
                        int cd=1;
                        while(true){
                            if(mark[cd]==false){
                                col[i-1][j]=col[i][j]=col[i+1][j]=cd;
                                if(cd==1){
                                    trim[i-1][j]=trim[i][j]=trim[i+1][j]='a';
                                }
                                else if(cd==2){
                                    trim[i-1][j]=trim[i][j]=trim[i+1][j]='b';
                                }
                                else if(cd==3){
                                    trim[i-1][j]=trim[i][j]=trim[i+1][j]='c';
                                }
                                else{
                                    trim[i-1][j]=trim[i][j]=trim[i+1][j]='d';
                                }
                                break;
                            }
                            cd++;
                        }
                    }
                }
                if(trim[i][m-j+1]=='b' && chk[i][m-j+1]==false){
                    if(trim[i-1][m-j+1]=='w' && trim[i+1][m-j+1]=='w' && chk[i-1][m-j+1]==false && chk[i+1][m-j+1]==false){
                        chk[i-1][m-j+1]=chk[i][m-j+1]=chk[i+1][m-j+1]=true;

                        memset(mark,false,sizeof mark);
                        if(chk[i-2][m-j+1]){
                            mark[col[i-2][m-j+1]]=true;
                        }
                        if(chk[i+2][m-j+1]){
                            mark[col[i-2][m-j+1]]=true;
                        }
                        if(chk[i][m-j+1-1]){
                            mark[col[i][m-j+1-1]]=true;
                        }
                        if(chk[i][m-j+1+1]){
                            mark[col[i][m-j+1+1]]=true;
                        }
                        if(chk[i-1][m-j+1-1]){
                            mark[col[i-1][m-j+1-1]]=true;
                        }
                        if(chk[i-1][m-j+1+1]){
                            mark[col[i-1][m-j+1+1]]=true;
                        }
                        if(chk[i+1][m-j+1-1]){
                            mark[col[i+1][m-j+1-1]]=true;
                        }
                        if(chk[i+1][m-j+1+1]){
                            mark[col[i+1][m-j+1+1]]=true;
                        }
                        int cd=1;
                        while(true){
                            if(mark[cd]==false){
                                col[i-1][m-j+1]=col[i][m-j+1]=col[i+1][m-j+1]=cd;
                                if(cd==1)
                                    trim[i-1][m-j+1]=trim[i][m-j+1]=trim[i+1][m-j+1]='a';
                                else if(cd==2)
                                    trim[i-1][m-j+1]=trim[i][m-j+1]=trim[i+1][m-j+1]='b';
                                else if(cd==3)
                                    trim[i-1][m-j+1]=trim[i][m-j+1]=trim[i+1][m-j+1]='c';
                                else
                                    trim[i-1][m-j+1]=trim[i][m-j+1]=trim[i+1][m-j+1]='d';
                                break;
                            }
                            cd++;
                        }

                    }
                }
            }
        }

        if(n-j+1>=0){
            for(int i=1;i<=m;i++){
                if(trim[j][i]=='w' && chk[j][i]==false){
                    if(trim[j+1][i]=='b' && trim[j+2][i]=='w' && chk[j+1][i]==false && chk[j+2][i]==false){
                        chk[j][i]=chk[j+1][i]=chk[j+2][i]=true;

                        memset(mark,false,sizeof mark);
                        if(chk[j-1][i])
                            mark[col[j-1][i]]=true;
                        if(chk[j+3][i])
                            mark[col[j+3][i]]=true;
                        if(chk[j][i-1])
                            mark[col[j+1][i-1]]=true;
                        if(chk[j][i+1])
                            mark[col[j][i+1]]=true;
                        if(chk[j+1][i+1])
                            mark[col[j+1][i+1]]=true;
                        if(chk[j+1][i-1])
                            mark[col[j+1][i-1]]=true;
                        if(chk[j+1][i+1])
                            mark[col[j+1][i+1]]=true;
                        if(chk[j+1][i-1])
                            mark[col[j+1][i+1]]=true;
                        int cd=1;
                        while(true){
                            if(mark[cd]==false){
                                col[j][i]=col[j+1][i]=col[j+2][i]=cd;
                                if(cd==1)
                                    trim[j][i]=trim[j+1][i]=trim[j+2][i]='a';
                                else if(cd==2)
                                    trim[j][i]=trim[j+1][i]=trim[j+2][i]='b';
                                else if (cd==3)
                                    trim[j][i]=trim[j+1][i]=trim[j+2][i]='c';
                                else
                                    trim[j][i]=trim[j+1][i]=trim[j+2][i]='d';
                                break;
                            }
                            cd++;
                        }
                    }
                }
                if(trim[n-j+1][i]=='w' && chk[n-j+1][i]==false){
                    if(trim[n-j+1-1][i]=='b' && trim[n-j+1-2][i]=='w' && chk[n-j+1-1][i]==false && chk[n-j+1-2][i]==false){
                        chk[n-j+1][i]=chk[n-j+1-1][i]=chk[n-j+1-2][i]=true;

                        memset(mark,false,sizeof mark);
                        if(chk[n-j+1-3][i])
                            mark[col[n-j-3][i]]=true;
                        if(chk[n-j+1+1][i])
                            mark[col[n-j+1+1][i]]=true;
                        if(chk[n-j+1][i+1])
                            mark[col[n-j+1][i+1]]=true;
                        if(chk[n-j+1][i-1])
                            mark[col[n-j+1][i-1]]=true;
                        if(chk[n-j+1-1][i+1])
                            mark[col[n-j+1-1][i+1]]=true;
                        if(chk[n-j+1-1][i-1])
                            mark[col[n-j+1-1][i-1]]=true;
                        if(chk[n-j+1-2][i+1])
                            mark[col[n-j+1-2][i+1]]=true;
                        if(chk[n-j+1-2][i-1])
                            mark[col[n-j+1-2][i-1]]=true;
                        int cd=1;

                        while(true){
                            if(mark[cd]==false){
                                col[n-j+1][i]=col[n-j+1-1][i]=col[n-j+1-2][i]=cd;
                                if(cd==1)
                                    trim[n-j+1][i]=trim[n-j+1-1][i]=trim[n-j+1-2][i]='a';
                                else if(cd==2)
                                    trim[n-j+1][i]=trim[n-j+1-1][i]=trim[n-j+1-2][i]='b';
                                else if(cd==3)
                                    trim[n-j+1][i]=trim[n-j+1-1][i]=trim[n-j+1-2][i]='c';
                                else
                                    trim[n-j+1][i]=trim[n-j+1-1][i]=trim[n-j+1-2][i]='d';
                                break;
                            }
                            cd++;
                        }
                    }
                }
            }
        }
        if(m-j+1>=0){
            for(int i=1;i<=n;i++){
                if(trim[i][j]=='w' && chk[i][j]==false){
                    if(trim[i][j+1]=='b' && trim[i][j+2]=='w' && chk[i][j+1]==false && chk[i][j+2]==false){
                        chk[i][j]=chk[i][j+1]=chk[i][j+2]=true;

                        memset(mark,false,sizeof mark);
                        if(chk[i][j-1])
                            mark[col[i][j-1]]=true;
                        if(chk[i][j+3])
                            mark[col[i][j+3]]=true;
                        if(chk[i-1][j])
                            mark[col[i-1][j]]=true;
                        if(chk[i+1][j])
                            mark[col[i+1][j]]=true;
                        if(chk[i+1][j+1])
                            mark[col[i+1][j+1]]=true;
                        if(chk[i-1][j+1])
                            mark[col[i-1][j+1]]=true;
                        if(chk[i+1][j+2])
                            mark[col[i+1][j+2]]=true;
                        if(chk[i-1][j+2])
                            mark[col[i-1][j+2]]=true;
                        int cd=1;
                        while(true){
                            if(mark[cd]==false){
                                col[i][j]=col[i][j+1]=col[i][j+2]=cd;
                                if(cd==1)
                                    trim[i][j]=trim[i][j+1]=trim[i][j+2]='a';
                                else if(cd==2)
                                    trim[i][j]=trim[i][j+1]=trim[i][j+2]='b';
                                else if(cd==3)
                                    trim[i][j]=trim[i][j+1]=trim[i][j+2]='c';
                                else
                                    trim[i][j]=trim[i][j+1]=trim[i][j+2]='d';
                                break;
                            }
                            cd++;
                        }

                    }
                }
                if(trim[i][m-j+1]=='w' && chk[i][m-j+1]==false){
                    if(trim[i][m-j+1-1]=='w' && trim[i][m-j+1-2]=='w' && chk[i][m-j+1-1]==false && chk[i][m-j+1-2]==false){
                        chk[i][m-j+1]=chk[i][m-j+1-1]=chk[i][m-j+1-2]=true;
                        memset(mark,false,sizeof mark);

                        if(chk[i][m-j+1-3])
                            mark[col[i][m-j+1-3]]=true;
                        if(chk[i][m-j+1+1])
                            mark[col[i][m-j+1+1]]=true;
                        if(chk[i-1][m-j+1])
                            mark[col[i-1][m-j+1]]=true;
                        if(chk[i+1][m-j+1])
                            mark[col[i+1][m-j+1]]=true;
                        if(chk[i+1][m-j+1-1])
                            mark[col[i+1][m-j+1-1]]=true;
                        if(chk[i-1][m-j+1-1])
                            mark[col[i-1][m-j+1-1]]=true;
                        if(chk[i+1][m-j+1-2])
                            mark[col[i+1][m-j+1-2]]=true;
                        if(chk[i-1][m-j+1-2])
                            mark[col[i-1][m-j+1-2]]=true;
                        int cd=1;
                        while(true){
                            if(mark[cd]==false){
                                col[i][m-j+1]=col[i][m-j+1-1]=col[i][m-j+1-2]=cd;
                                if(cd==1)
                                    trim[i][m-j+1]=trim[i][m-j+1-1]=trim[i][m-j+1-2]='a';
                                else if(cd==2)
                                    trim[i][m-j+1]=trim[i][m-j+1-1]=trim[i][m-j+1-2]='b';
                                else if(cd==3)
                                    trim[i][m-j+1]=trim[i][m-j+1-1]=trim[i][m-j+1-2]='c';
                                else
                                    trim[i][m-j+1]=trim[i][m-j+1-1]=trim[i][m-j+1-2]='d';
                                break;
                            }
                            cd++;
                        }
                    }
                }
            }
        }
    }



    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        if(trim[i][j]!='.' && chk[i][j]==false){
            cout<<"NO"<<endl;
            return 0;
        }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<trim[i][j];
        }
        cout<<endl;
    }
    return 0;
}
