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
	

    int n,m;    cin>>n>>m;
    vector<string> s(n),t(m);
    rep(i,n) cin>>s[i];
    rep(i,m) cin>>t[i];

    

    rep(i,n) rep(j,n){
        //Sの左上の座標(i,j)
        if(i+m>n or j+m>n) break;
        bool check=true;
        
        //Tの全探索
        rep(k,m)rep(l,m){
            if(s[i+k][j+l] != t[k][l]) check=false;
        }
         
        if(check){
            cout<<i+1<<" "<<j+1<<endl;
            return 0;
        }
    }
    
	return 0;
}