#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
class SegmentTree {
public:
	int dat[300000], siz = 1;

	// 要素 dat の初期化を行う（最初は全部ゼロ）
	void init(int N) {
		siz = 1;
		while (siz < N) siz *= 2;
		for (int i = 1; i < siz * 2; i++) dat[i] = 0;
	}

	// クエリ 1 に対する処理
	void update(int pos, int x) {
		pos = pos + siz - 1;
		dat[pos] = x;
		while (pos >= 2) {
			pos /= 2;
			dat[pos] = dat[pos * 2] + dat[pos * 2 + 1];
		}
	}

	// クエリ 2 に対する処理
	int query(int l, int r, int a, int b, int u) {
		if (r <= a || b <= l) return 0;
		if (l <= a && b <= r) return dat[u];
		int m = (a + b) / 2;
		int AnswerL = query(l, r, a, m, u * 2);
		int AnswerR = query(l, r, m, b, u * 2 + 1);
		return AnswerL + AnswerR;
	}
};




int main() {
	// 入力
	int N,Q;    cin>>N>>Q;
    vector<int> Query(100009), pos(100009), x(100009), l(100009), r(100009);
	for(int i=1;i<=Q;i++) {
		cin>>Query[i];
		if(Query[i] == 1) cin >> pos[i] >> x[i];
		if(Query[i] == 2) cin >> l[i] >> r[i];
	}

	// クエリ処理
    SegmentTree Z;  Z.init(N);
	for (int i = 1; i <= Q; i++) {
		if(Query[i] == 1) Z.update(pos[i], x[i]);
        // 最初のセルに対応する半開区間は [1, siz + 1)
		if(Query[i] == 2)
            cout<<Z.query(l[i], r[i], 1,Z.siz + 1, 1)<<endl;
	}

	for(int i=0;i<20;i++) cout<<"["<<i<<"]:"<<Z.dat[i]<<" ";
	return 0;
}