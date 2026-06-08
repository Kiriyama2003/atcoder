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
    vector<tuple<int,int,int>> edges;
    rep(i,m) {
        int a,b,c;  cin>>a>>b>>c;   --a; --b;
        edges.emplace_back(a,b,c);
    }

    int ans = 0;
    for (int i = 29; i >= 0; i--) {
        dsu uf(n);
        for (auto [a,b,c] : edges) {
            if (((c>>i)|(ans>>i)) == (ans>>i)) uf.merge(a,b);
        }
        // 同じグループでないならば
        if (!uf.same(0,n-1)) ans |= 1<<i;
    }
    cout << ans << endl;
    return 0;
}