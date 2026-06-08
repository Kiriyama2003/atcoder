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
	//int n,m; cin>>n>>m;
	//string s;  cin>>s;
	int n, w;   cin>>n>>w;
    vector<int> x(n), y(n);

    rep(i,n) {
        cin>>x[i]>>y[i];
        x[i]--;
    }

    vector<int> idx(n);
    rep(i,n) idx[i] = i;
    sort(idx.begin(), idx.end(), [&](int i, int j) {
        return y[i] < y[j];
    });

    vector<int> r(n);
    vector<int> num(w);

    for (int i : idx) {
        r[i] = num[x[i]];
        num[x[i]]++;
    }

    const int INF = 1001001001;
    vector<int> d(n,INF);
    {
        vector<vector<int>> blocks(n);
        rep(i,n) blocks[r[i]].push_back(i);
        rep(i,n) {
            if (blocks[i].size() != w) continue;

            if(d[r[i]]!=INF) continue;

            int mx = 0;
            for (int j : blocks[i]) mx = max(mx, y[j]-1);

            //mxは, グループで最高の高さ(0 index)
            d[i] = mx+1;
        }
    }
    // rep(i,n) cout << r[i] << ' '; cout << endl;
    // rep(i,n) cout << d[i] << ' '; cout << endl;

    int q;  cin>>q;
    rep(qi,q){
        int t,a;    cin>>t>>a;  a--;
        //a：ブロックa
        //r[a]：aは, 下から何番目のグループに属しているか
        //d[r[a]]：下からr[a]番目のグループは, 何秒後に消えるか

        if( d[r[a]] > t+0.5) cout<<"Yes\n";  //残っている
        
        //t==1は1回動作
        //t==1.5のときは  d[]の最小値は1 -> 初期状態で下の行が揃っている
        //t==2は2回目動作した
        else cout<<"No\n";              //残っていない
    }
	return 0;
}