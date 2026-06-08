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
void chmin(int& a,int b){a=min(a,b);}
int main(){
    int n;  cin>>n;
    vector<pair<ll,int>> m;
    rep(i,n){
        ll num; cin>>num;
        m.push_back({num,0});
    }
    rep(i,n-1){
        ll num; cin>>num;
        m.push_back({num,1});
    }
    sort(all(m), [](const pair<ll,int>& a, const pair<ll,int>& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first < b.first;
    });

    while(1){
        int old,neww,tmp,
        old= 

    }
    

    


    return 0;
}