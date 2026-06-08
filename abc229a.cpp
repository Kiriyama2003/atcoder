#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    string s1,s2;   cin>>s1>>s2;
    int cnt=0;
    if(s1[0]=='#') cnt++;
    if(s1[1]=='#') cnt++;
    if(s2[0]=='#') cnt++;
    if(s2[1]=='#') cnt++;
    
    if(cnt==2) {
        if((s1[0]=='#' && s2[1]=='#') || (s1[1]=='#' && s2[0]=='#')) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }else cout<<"Yes"<<endl;
    

    return 0;

}