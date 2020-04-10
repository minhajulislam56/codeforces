//Mohsin

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mx=0;
    scanf("%d", &n);

    char str[n+5], tmp[4];
    scanf("%s",&str);

    vector<string> temp;
    vector<string> Max;

    for(int i=0; i<n-1 ;i++)
    {
        for(int j=0, k=i; j<=1 ;j++, k++)
        {
            tmp[j] = str[k];
        }
        tmp[2] = '\0';
        temp.push_back(tmp);
    }
    for(int i=0; i<n-1 ;i++)
    {
        //cout<<temp[i]<<" ";

        int cnt = count(temp.begin(), temp.end(), temp[i]);
        if(mx < cnt)
        {
            mx = cnt;
            Max.push_back(temp[i]);
        }
        //cout<<cnt<<endl;
    }
    Max.erase(Max.begin(),Max.end()-1 );

    cout<<Max[0]<<endl;
    return (0);
}
