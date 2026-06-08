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
using D=tuple<ll,int,int>;
int main(void){
	ll h,w,x,P,Q;   cin>>h>>w>>x>>P>>Q;
    P--,Q--;

    vector<vector<ll>> s(h,vector<ll>(w));
    rep(i,h) rep(j,w) cin>>s[i][j];

    priority_queue<D,vector<D>,greater<D>> p;

    vector<vector<bool>> used(h, vector<bool>(w));

    auto push=[&](int i,int j){
        rep(v,4){
            int ni=i+di[v],nj=j+dj[v];

            if(ni<0 or nj <0 or ni >=h or nj >= w) continue;
            if(used[ni][nj]) continue;

            used[ni][nj] = true;
            p.emplace(s[ni][nj],ni,nj);
        }
    };

    push(P,Q);
    ll t = s[P][Q]; 
    s[P][Q] = 0;

    while((int)p.size()){
        auto [point,ni,nj] = p.top();    p.pop();
        if(point > (t-1)/x) break;
        t += point;
        push(ni,nj);
    }

	cout<<t<<endl;
	return 0;
}