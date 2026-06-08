#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
void chmin(int& a,int b){a=min(a,b);}

int N;
const int INF = 1001001001;
vector G(100000,vector<int>());
vector<int> dist(100000,INF);

void bfs(int start){
    rep(i,N) dist[i]=INF;
	queue<int> Q;
	Q.push(start);
	dist[start] = 0;

	while(!Q.empty()) {
		int pos=Q.front(); Q.pop();
		for (int to : G[pos]) {
			if(dist[to] == INF) {
				dist[to] = dist[pos] + 1;
				Q.push(to);
			}
		}
	}
}

int main() {
	//入力
	cin>>N;
    rep(i,N-1){
        int a,b;    cin>>a>>b;  a--;    b--;
		G[a].push_back(b);  G[b].push_back(a);
    }
	
	bfs(0); //始点を頂点0とする, dist[i]：頂点0から, 頂点iまでの距離を作成
	int maxn1 = -1, maxid1 = -1;
	for(int i = 0; i <= (N-1); i++) {
		if (maxn1 < dist[i]) {
			maxn1 = dist[i];
			maxid1 = i;
		}
	}

	bfs(maxid1);
	int maxn2 = -1;
	for(int i = 0; i <= (N-1); i++) {
		maxn2 = max(maxn2, dist[i]);
	}


	cout << maxn2 + 1 << endl;
	return 0;
}