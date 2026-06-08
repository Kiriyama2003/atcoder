#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    pair<int,int>p; cin>>p.first>>p.second;
    if(p==make_pair(1,2) ||p==make_pair(2,4) ||p==make_pair(2,5) ||p==make_pair(4,8) ||p==make_pair(1,3) ||p==make_pair(3,6) ||p==make_pair(3,7) ||p==make_pair(6,12) ||p==make_pair(6,13) ||p==make_pair(7,14) ||p==make_pair(7,15) ) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}