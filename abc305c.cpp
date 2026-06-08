#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int h,w;    cin>>h>>w;
    vector<string>s(h);     rep(i,h) cin>>s[i];
    pair<int,int> St(600,600),En(0,0);    //bool check=0;
    rep(i,h){
        rep(j,w){
            //if(s[i][j]=='#' && check==0) {St=make_pair(i,j); check=1;}
            if(s[i][j]=='#') {
                St.first=min(St.first,i);
                St.second=min(St.second,j);
                En.first=max(i,En.first);
                En.second=max(En.second,j);
                
            }
        }
    }

    //cout<<St.first<<St.second<<" "<<En.first<<En.second<<endl;
    for(int i=St.first;i<En.first+1;i++){
        for(int j=St.second;j<En.second+1;j++){
            if(s[i][j]!='#') {cout<<i+1<<" "<<j+1<<endl; return 0;}
        }
    }

    
    return 0;
}