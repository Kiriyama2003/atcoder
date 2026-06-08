#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    sort(all(a));

    map<int,vector<int>> mp;
    rep(i,n){
        bool check=0;
        for(auto [v,vv]:mp){
            if(a[i]%v == 0){ mp[v].push_back(a[i]); check=1;}
        }
        if(!check) mp[a[i]].push_back(a[i]);
    }
    cout<<mp.size()<<endl;

    return 0;
}