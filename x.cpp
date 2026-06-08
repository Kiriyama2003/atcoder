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

//WA セグメント木で実装しようとしたけど失敗

class SegmentTree {
public:
    vector<int> dat;
    int siz = 1;

    // 要素 dat の初期化を行う（最初は全部ゼロ）
    void init(int N) {
        siz = 1;
        while(siz < N) siz *= 2;
        dat.assign(siz * 2, 0);
    }

    // クエリ 1 に対する処理: インデックス pos の値を増加
    void update(int pos) {
        pos += siz;
        ++dat[pos];
        while (pos > 1) {
            pos /= 2;
            dat[pos] = dat[pos * 2] + dat[pos * 2 + 1];
        }
    }

    // クエリ 2 に対する処理: 区間 [l, r) の和を取得
    int sum(int l, int r, int a, int b, int u) {
        if (r <= a || b <= l) return 0; // 範囲外
        if (l <= a && b <= r) return dat[u]; // 完全に含まれる
        int m = (a + b) / 2;
        return sum(l, r, a, m, u * 2) + sum(l, r, m, b, u * 2 + 1);
    }

    // sum の簡略化: 外部から呼び出しやすくするためのラッパー
    int sum(int l, int r) {
        return sum(l, r, 0, siz, 1);
    }
};


int main() {
    int N,M;    cin>>N>>M;
    vector<int> A(N);
    rep(i,N) cin>>A[i];

    vector<ll> S(N+1, 0);
    rep(i,N) S[i+1] = (S[i] + A[i]) % M;

   ll ans = 0;
   SegmentTree Z;
   Z.init(M+100);
   
    for(int i=0;i<N;i++){
        ans += (i+1) * (ll)S[i+1];
        ans -= (N-i) * (ll)S[i];

        Z.update(S[i]+1);

        ans += Z.sum(S[i]+2,M+1,1,Z.siz+1,1) *M;
    }

    ans += Z.sum(S[N]+2,M+1,1,Z.siz+1,1) *M;
 
    cout<<ans<<endl;
    return 0;
}