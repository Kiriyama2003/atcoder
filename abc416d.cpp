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
int main() {
    ll N,M;     cin>>N>>M;
    vector<ll> A(M),B(M);
    rep(i,M) cin>>A[i]>>B[i];
    

    queue<P> q;         // (cola, empty)
    map<P, ll> visited; // 状態 -> 最大シール数

    q.push({N, 0});
    visited[{N, 0}] = 0;
    ll ans = 0;

    while (!q.empty()) {
        auto [cola, empty] = q.front(); q.pop();
        ll seal = visited[{cola, empty}];
        ans = max(ans, seal);

        // 飲む
        if(cola > 0){
            P next = {0, empty + cola};
            if(!visited.count(next) || visited[next] < seal){
                visited[next] = seal;
                q.push(next);
            }
        }

        // すべての交換を試す
        rep(i,M){
            if(empty >= A[i]){
                ll times = empty / A[i];
                ll new_empty = empty - times * A[i];
                ll new_cola = times * B[i];
                ll new_seal = seal + times;
                P next = {new_cola, new_empty};
                if(!visited.count(next) || visited[next] < new_seal){
                    visited[next] = new_seal;
                    q.push(next);
                }
            }
        }
    }

    cout<<ans<<"\n";
    return 0;
}
