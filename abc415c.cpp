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


bool dfs(int N, const vector<char> &danger, int mask, vector<bool> &visited) {
    if (mask == (1 << N) - 1) return true;  // 全て混ざった
    if (visited[mask]) return false;        // 既に試した
    visited[mask] = true;

    rep(i,N){
        if(!(mask & (1 << i))){
            int next = mask | (1 << i);
            if(danger[next]) continue; // 危険な混合を避ける
            
            //変更点は第3,4引数のみ
            if(dfs(N, danger, next, visited)) return true;
        }
    }
    return false;
}

int main(){
    int T;  cin>>T;
    while(T--){
        int N;  string S;   cin>>N>>S;

        vector<char> danger(1 << N);
        for(int i = 1; i < (1 << N);++i) danger[i] = S[i - 1];

        vector<bool> visited(1 << N, false);
        bool ok = dfs(N, danger, 0, visited);
        cout<<(ok ? "Yes" : "No")<<"\n";
    }
    return 0;
}