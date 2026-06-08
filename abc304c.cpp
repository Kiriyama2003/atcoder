#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,d;    cin>>n>>d;
    
    vector<int>x(n),y(n);   rep(i,n) cin>>x[i]>>y[i];

    vector<vector<bool>>graph(n,vector<bool>(n));
    
    rep(i,n){ rep(j,n) {
            if((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]) <=d*d) graph[i][j]=1;
        }
    }

    vector<bool> ans(n,false);    ans[0] = true;  //人1は感染
	queue<int> que; que.push(0);    //que={0}

	while (que.size()!=0) {  //que.sizeが0になるまで
		int q = que.front(); que.pop();
        //先頭を抜く
        rep(i,n){
			if (graph[q][i]==1 && ans[i]==0) {
				ans[i] = true;  que.push(i);}
		}
	}
	rep(i,n) cout<<(ans[i]?"Yes":"No")<<endl;

    
    return 0;
}