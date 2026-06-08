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
struct path{
    int a,b,w;
};
int main(void){
	//int n,m; cin>>n>>m;
	//string s;  cin>>s;
	int N,M;    cin>>N>>M;

    vector<path> G(M);
    rep(i,M) cin>>G[i].a>>G[i].b>>G[i].w;
    vector<vector<pair<int,int>>> graph(N+1);
    rep(i,M){
        graph[G[i].a].push_back({G[i].b,G[i].w});
    }

    //GG[i][j] := 頂点iに値jでいくことができるか, できないか
    vector<vector<bool>> GG((N+1),vector<bool>(1023,false));

    GG[1][0] = true;
    queue<pair<int,int>> que;
    que.emplace(make_pair(1,0));
    while(que.size()){
        auto [from,now] = que.front();
        que.pop();
        rep(i,graph[from].size()){
            auto [to,wei] = graph[from][i];

            if(GG[to][now xor wei] == false){
                GG[to][now xor wei] = true;
                que.emplace(make_pair(to,now xor wei));
            }
        }
    }

    rep(i,1024){
        if(GG[N][i] == true) {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    
	return 0;
}