#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
vector<vector<int>> e(1000000,vector<int>());
vector<int> used(1000000,-1);
int cnt;

void dfs(int s,int v){
	if(used[v]==s) return;
	used[v]=s;
	cnt++;
	int sz=e[v].size();
	for(int i=0;i<sz;i++) dfs(s,e[v][i]);
	return;
}

int main(void){
	int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
	int h,w;	cin>>h>>w;
	vector<string> s(h);
	rep(i,h) cin>>s[i];

	//eに入れてく作業
	rep(i,h) rep(j,w){
		if(s[i][j]=='#') continue;
		bool can=true;
		for(int k=0;k<4;k++){
			if((i+dx[k]>=0)&&(i+dx[k]<h)&&(j+dy[k]>=0)&&(j+dy[k]<w)){
				e[i*w+j].push_back((i+dx[k])*w+(j+dy[k]));
				if(s[i+dx[k]][j+dy[k]]=='#') can=false;
			}
		}
		if(!can) e[i*w+j].clear();
	}

	int ans=0;
	rep(i,h) rep(j,w){
		if((s[i][j]=='.')&&(used[i*w+j]<0)){
			cnt=0;
			dfs(i*w+j,i*w+j);
			ans=max(ans,cnt);
		}
	}
	std::cout<<ans<<endl;
}
