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
    ll N,L;     cin>>N>>L;

    vector<ll> d(N-1);
    for(ll i=0;i<(N-1);++i) cin>>d[i];

    //これをしないと, L/3!=0のときに, 不具合
    if(L%3 != 0) {
        cout<<0<<endl;
        return 0;
    }

    // 点1を0として, 絶対的な位置を求める
    vector<ll> pos(N);
    pos[0] = 0;
    for(ll i=1;i<N;++i) pos[i] = (pos[i - 1] + d[i - 1]) % L;

    // 位置のカウント
    map<ll, ll> cnt;
    set<ll> S;
    for(ll i = 0; i < N; ++i){
        cnt[pos[i]]++;
        S.insert(pos[i]);
    }

    ll ans = 0;

    for(auto p:S){
        

        ll p1 = (p + L / 3) % L;
        ll p2 = (p + 2 * L / 3) % L;

        if (cnt.count(p1) && cnt.count(p2)) {
            ll c0 = cnt[p];
            ll c1 = cnt[p1];
            ll c2 = cnt[p2];

            // 同じ位置を頂点にできない
            if (p == p1 || p == p2 || p1 == p2) continue;
            ans += c0 * c1 * c2;
        }
        
    }

    // 重複カウントを 3 で割る
    cout << ans / 3 << endl;
	return 0;
}