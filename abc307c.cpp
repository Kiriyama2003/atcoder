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

    vector<pair<int,int>> HW(3);
    vector<string> A,B,X;
    rep(i,3){
        cin>>HW[i].first>>HW[i].second;
        if(i==0){
            A.assign(HW[i].first,"");
            rep(j,HW[i].first) cin>>A[i];
        }else if(i==1){
            B.assign(HW[i].first,"");
            rep(j,HW[i].first) cin>>B[i];
        }else{
            X.assign(HW[i].first,"");
            rep(j,HW[i].first);
        }
    }

    
	
	return 0;
}