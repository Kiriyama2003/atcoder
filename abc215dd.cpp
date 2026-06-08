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
void chmin(ll& a,ll b){a=min(a,b);}
const ll INF = 1e18;
int main(){
    int n,m;    cin>>n>>m;
    const int L=100001;
    vector<int> d;  //d={入力}を作成
    rep(i,n){
        int a;  cin>>a;
        d.push_back(a);
    }

    vector<bool> ok(m+1,true);
    for(int i : d) {
        for(int j=i;j<=m;j+=i) ok[j] = false;
    }


    //ok[i]：iはgcd1である
    int cnt = 0;
    for(int i=1;i<=m;++i) if(ok[i]) cnt++;
    cout<<cnt<<endl;
    for(int i=1;i<=m;++i) if(ok[i]) cout<<i<<endl;
    return 0;
}