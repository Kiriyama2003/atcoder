#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}
int main(void){
    int n,m;    cin>>n>>m;
   
    set<int> s;
    rep(i,m){
        int num;    cin>>num;   s.insert(num);
    }

    
    vector<int> ans;
    REP(i,n){
        if(!s.count(i)) ans.push_back(i);
    }

    int ansi=ans.size();
    cout<<ansi<<endl;
    rep(i,ansi){
        if(i==0) cout<<ans[i];
        else cout<<" "<<ans[i];
    }
    cout<<endl;
    return 0;
}