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
	int N,M;    cin>>N>>M;

    vector<ll> X(N);    // 家の位置
    rep(i,N) cin>>X[i]; 

    sort(all(X));   //Xはソートされていないから, ソートする

    vector<ll> diff(N-1);
    rep(i,N-1)  diff[i]=X[i+1]-X[i];
    sort(all(diff));
    
    ll ans=0;
    // 頂点の間隔(N-1)から, (基地局3(=M)つなら, その間には2(=M-1)になる)
    // これ(M-1)を除いた, diffにすればいいから, {N-1 - (M-1)個のdiffの総和}が答えになる
    rep(i,(N-1)-(M-1)) ans+=diff[i];
    cout<<ans<<"\n";
	return 0;
}