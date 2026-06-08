#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()

int n,m,ans;
vector<bool> used(11);
vector<vector<int>> e(11,vector<int>(11));
//幅優先探索
void dfs(int v,int sum){
	used[v]=1;
	ans=max(ans,sum);
	for(int i=1;i<=n;i++){
        if(!used[i]&&e[v][i]) dfs(i,sum+e[v][i]);
    }
	used[v]=0;
}

int main() {
    cin>>n>>m;
    //n個の街, m本の道路
    for(int i=0;i<m;i++){
		int a,b,c;  cin>>a>>b>>c;
		e[a][b]=e[b][a]=c;
	}


	for(int i=1;i<=n;i++) dfs(i,0);
    cout<<ans<<endl;  
    return 0;
}
