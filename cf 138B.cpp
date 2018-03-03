/** NOT AC **/
#include<bits/stdc++.h>
using namespace std;
int mark1[11],mark2[11];
vector<int> n1, n2;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string in;
    cin>>in;

    for(int i=0;i<in.length();i++){
        int p=in[i]-'0';
        mark1[p]++,mark2[p]++;
    }
    int c=0;
    bool fg;
    int len=0;
    for(int i=0;i<in.length();i++){

        if(c){
            fg=true;
            for(int j=0;j<10;j++){
                if(mark1[j]>0 && mark2[10-j-c]>0){
                    n1.push_back(j);
                    n2.push_back(10-j-c);
                    mark1[j]--,mark2[10-j-c]--;
                    if(c+j+(10-j-c)>9) c=1;
                    else c=0;
                    fg=false;
                    break;
                }
            }
            if(fg){
                while(mark1[0]>0 && mark2[0]>0){
                    mark1[0]--,mark2[0]--;
                    len++;
                }
                for(int i=0;i<10;i++){
                    while(mark1[i]--){
                        n1.push_back(i);
                    }
                    while(mark2[i]--)
                        n2.push_back(i);
                }
                goto print;
            }
        }
        else{
            fg=true;
            for(int j=1;j<10;j++){
                if(mark1[j]>0 && mark2[10-j]>0){
                    n1.push_back(j);
                    n2.push_back(10-j);
                    mark1[j]--,mark2[10-j]--;
                    c=1;
                    fg=false;
                    break;
                }
            }
            if(fg){
                while(mark1[0]>0 && mark2[0]>0){
                    mark1[0]--,mark2[0]--;
                    len++;
                }
                for(int i=0;i<10;i++){
                    while(mark1[i]--){
                        n1.push_back(i);
                    }
                    while(mark2[i]--)
                        n2.push_back(i);
                }
                goto print;
            }
        }
    }
    print:
        for(int i=n1.size()-1;i>=0;i--)
            cout<<n1[i];
        for(int i=0;i<len;i++) cout<<0;
        cout<<endl;
        for(int i=n2.size()-1;i>=0;i--)
            cout<<n2[i];
        for(int i=0;i<len;i++) cout<<0;
        cout<<endl;

    return 0;
}

