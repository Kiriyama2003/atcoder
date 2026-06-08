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
	//int n,m; cin>>n>>m;
	//string s;  cin>>s;
    vector<int> cnt(4);
    rep(i,4) cin>>cnt[i];

    sort(all(cnt));
    if((cnt[0]==cnt[1] and cnt[2]==cnt[3] and cnt[0]!=cnt[2]) or(cnt[0]==cnt[1] and cnt[1]==cnt[2] and cnt[2]!=cnt[3]) or cnt[0]!=cnt[1] and cnt[1]==cnt[2] and cnt[2]==cnt[3]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
	
	return 0;
}