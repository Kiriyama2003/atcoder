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
	string s,t; cin>>s>>t;
    bool f = true;
    rep(i,size(s)){
        if(i==0) continue;

        if('A'<=s[i] and s[i]<='Z') {
            bool flag =false;
            rep(j,size(t)) if(s[i-1]==t[j]) flag=true;
            if(flag == false) f=false;
        }
    }
    cout<<(f?"Yes":"No")<<endl;
	return 0;
}