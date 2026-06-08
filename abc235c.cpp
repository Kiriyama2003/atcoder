#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,q;    cin>>n>>q;
    map<ll,vector<int>> mp;
    REP(i,n){
        ll num;     cin>>num;
        mp[num].push_back(i);
    }


    rep(i,q){
        ll x,k; cin>>x>>k;
        if(mp[x].size()<k) cout<<-1<<endl;
        else cout<<mp[x][k-1]<<endl;
    }

    return 0;
}