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
    int n,Q;    cin>>n>>Q;
    set<pair<int,int>> follows;
    rep(i,Q){
        int t,a,b;  cin>>t>>a>>b;
        if(t==1){
            follows.insert({a,b});
        }else if(t==2){
            follows.erase({a,b});
        }else{
            cout<<(follows.count({a,b}) && follows.count({b,a}) ?"Yes":"No")<<endl;
        }
    }
    return 0;
}