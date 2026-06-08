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
    int n,k;    cin>>n>>k;  vector<int>a;
    rep(i,n){
        int num;    cin>>num;
        a.push_back(num);
    }
    rep(i,k){
        a.erase(a.begin());
        a.push_back(0);
    }
    for(auto s:a) cout<<s<<" ";
    cout<<endl;


    return 0;
}