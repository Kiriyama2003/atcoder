#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
int main(void){
    int d;  cin>>d;
    vector<int> c(26);
    rep(i,26) cin>>c[i];

    vector<vector<int>> s(d,vector<int>(26,0));
    rep(i,d) rep(j,26) cin>>s[i][j];

    vector<int> t(d);
    rep(i,d) cin>>t[i];

    ll score = 0;
    vector<int> last(26,0);
    rep(i,d){
        //i　：　i日目  t[i]　：　i日目はタイプt[i]
        last[t[i]-1] = (i+1);
        score += s[i][t[i]-1];
        ll loss=0;
        rep(j,26) loss += c[j]*((i+1)-last[j]);
        score -= loss;
        cout<<score<<endl;
    }
    //cout<<max(1000000+score,0LL)<<endl;
	return 0;
}