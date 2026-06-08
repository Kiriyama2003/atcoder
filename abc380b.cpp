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
int main(void){
	//int n,m; cin>>n>>m;
	string s;  cin>>s;
    vector<int> vec;
    
    int cnt=0;
    for(int i=1;i<(int)s.size();i++){
        if(s[i]=='|'){
            vec.push_back(cnt);
            cnt=0;
        }else{
            cnt++;
        }
    }
    for(auto ff:vec) cout<<ff<<" ";

	return 0;
}