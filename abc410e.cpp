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
	int N,H,M;    cin>>N>>H>>M;
    vector<pair<int,int>> inp(N);
    rep(i,N) cin>>inp[i].first>>inp[i].second;

    

    vector<vector<int>> g(N+1,vector<int>(30001));
    g[0][H] = M;
    
    for(int i=1;i<=N;i++){
        // 遷移i回目
        
        if(H-inp[i-1].first>=0){
            g[i][H-inp[i-1].first] = g[i]
        }
        g[i][]
    }
    
    
	return 0;
}