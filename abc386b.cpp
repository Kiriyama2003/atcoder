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
	string s;  cin>>s;

    int cnt=0;
    rep(i,(int)s.size()){
        if(i!=(int)s.size()-1){
            if(s[i]=='0' and s[i+1]=='0') {
                cnt++;
                i++;
            }
        }
    }    
    cout<<(int)s.size()-cnt<<endl;
	
	return 0;
}