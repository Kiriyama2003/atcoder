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
    vector<pair<int,int>> edges(m);
    map<int,int> mp;
    rep(i,m){
        cin>>edges[i].first>>edges[i].second;
        --edges[i].first, --edges[i].second;
        mp[edges[i].first]++;
        mp[edges[i].second]++;
    }
    for(auto [a,b]:mp){
        if(b>2){
            cout<<"No"<<endl;
            return 0;
        }
    }
    dsu ds(n);
    for(auto [a,b]:edges){
        ds.merge(a,b);
    }
    if(ds.groups().size() == 1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


    return 0;
}