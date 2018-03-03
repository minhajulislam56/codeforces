#include<bits/stdc++.h>
using namespace std;

//typedefs
#define MAX 200007
#define si(a) scanf("%d",&a)

int rep[MAX];
bool mark[MAX], used[MAX];
int main()
{
    int n;
    si(n);
    int arr[n+7];
    for(int i=0;i<n;i++){
        si(arr[i]);
        rep[arr[i]]++;
        if(rep[arr[i]]>1)
            mark[arr[i]]=true;
    }
    vector<int> v;
    for(int i=1;i<=n;i++){
        if(!rep[i])
            v.push_back(i);
    }
    for(int i=0,j=0;i<n;i++){

        if(mark[arr[i]]){
            if(!used[arr[i]] && rep[arr[i]]==1){
                continue;
            }
            if(!used[arr[i]]){
                if(arr[i]>v[j]){
                    rep[arr[i]]--;
                    //cout<<rep[arr[i]]<<" chk"<<endl;
                    arr[i]=v[j];
                    j++;

                }
                else{
                    used[arr[i]]=true;
                    rep[arr[i]]--;
                }
            }
            else{
                rep[arr[i]]--;
                //cout<<rep[arr[i]]<<" chk2"<<endl;
                arr[i]=v[j];
                j++;

            }
        }
    }

    printf("%d\n", v.size());
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
