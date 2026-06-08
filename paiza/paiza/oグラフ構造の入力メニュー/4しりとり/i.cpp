#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n;    cin>>n;
    vector<string> s(n);
    rep(i,n) cin>>s[i];


    vector<pair<int,int>> g(27);
    rep(i,n){
        g[(int)s[i][0]-'a'].first++;
        g[(int)s[i].back()-'a'].second++;
    }
    
    bool check=true;
    for(int i=1;i<=26;i++){
        if(g[i].first != g[i].second){check=false;}
    }
    if(check){cout<<1; return 0;}


    int check1=0,check2=0;
    for(int i=1;i<=26;i++){
        if(g[i].first == g[i].second) continue;
        else if(g[i].first+1 == g[i].second) check1++;
        else if(g[i].first == g[i].second+1) check2++;
        else {cout<<0; return 0;}
    }
    if((check1 == 1) && (check2 == 1)) cout<<1;
    else cout<<0;
    

    

    return 0;
}