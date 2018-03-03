#include<bits/stdc++.h>
using namespace std;
#define MAX 200
int par[MAX];
int find_set(int n)
{
	if(par[n]==n) return n;
	return par[n]=find_set(par[n]);
}
void make_set(int u,int v)
{
	par[find_set(u)]=find_set(v);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s1,s2;
    cin>>n>>s1>>s2;
    vector<pair<char,char> > words;
    for(int i='a';i<='z';i++) par[i]=i;

    for(int i=0;i<s1.length();i++){
    	if(find_set(s1[i])!=find_set(s2[i])){
    		words.push_back(make_pair(s1[i],s2[i]));
    		make_set(s1[i],s2[i]);
    	}
    }
    cout<<words.size()<<endl;
    for(int i=0;i<words.size();i++){
        cout<<words[i].first<<" "<<words[i].second<<endl;
    }
    return 0;
}
