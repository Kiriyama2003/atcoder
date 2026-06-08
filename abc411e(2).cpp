#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
ll mod = 998244353LL;
ll inv = 166374059LL; // 1/6 mod 998244353

// ---- セグメントツリー用の型定義 ----

// 値は確率（乗算）
using S = ll;

// 遅延評価の更新は掛け算
using F = ll;

// 区間結合：掛け算
S op(S a, S b) { return S{a * b % mod}; }
S e() { return S{1}; }  // 単位元は1

// 遅延評価の作用：掛け算
S mapping(F f, S x) { return S{x * f % mod}; }

// 遅延評価の合成：掛け算
F composition(F f, F g) { return f * g % mod; }
F id() { return 1; }

// ---- メイン ----

// https://qiita.com/Shizen_Tota/items/687ddc17baff09e97176#e---e-max
// これを基に, aclibのlazy segmenttreeに書き換えてもらった

int main() {
    int n;  cin>>n;

    vector<vector<ll>> dc(n, vector<ll>(6));
    set<ll> st;
    st.insert(0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> dc[i][j];
            st.insert(dc[i][j]);
        }
        sort(dc[i].begin(), dc[i].end());
    }

    // 座標圧縮
    map<ll, int> nm;
    int cnt = 0;
    for (auto x : st) nm[x] = cnt++;

    // ACL lazy_segtree 初期化
    lazy_segtree<S, op, e, F, mapping, composition, id> seg(cnt);
    // 全て 1 で初期化
    for (int i = 0; i < cnt; i++) seg.set(i, 1);

    // 0は確率0に
    seg.apply(0, 1, 0);

    // 更新
    for (auto vec : dc) {
        seg.apply(0, nm[vec[0]], 0);
        for (ll i = 0; i < 6; i++) {
            if (i == 5) break;
            if (vec[i+1] != vec[i]) {
                ll prb = inv * (i + 1) % mod;
                seg.apply(nm[vec[i]], nm[vec[i+1]], prb);
            }
        }
    }

    ll ans = 0, bef = 0;
    for (auto x : st) {
        ll p = seg.prod(nm[x], nm[x]+1); // 1点取得
        ll q = (p + mod - bef) % mod;
        bef = p;

        q = q * x % mod;
        ans = (ans + q) % mod;
    }

    cout << ans << endl;
}
