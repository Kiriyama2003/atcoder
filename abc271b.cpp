#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod=998244353;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,q;    cin>>n>>q;
    vector<vector<int>>vec(n);
    rep(i,n){
        int ln;  cin>>ln;
        rep(j,ln){
            int num;    cin>>num;
            vec[i].push_back(num);
        }
    }
    rep(i,q){
        int a,b;    cin>>a>>b;
        cout<<vec[a-1][b-1]<<endl;
    }
    return 0;
}