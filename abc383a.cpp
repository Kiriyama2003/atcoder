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
	int n; cin>>n;
	//string s;  cin>>s;
    vector<int> t(n),v(n);

    rep(i,n) cin>>t[i]>>v[i];

    int j=0,tmp=0;
    for(int i=1;i<=100;i++){
        
        if(tmp>0) tmp--;
        if(i == t[j]){
            tmp += v[j];
            j++;
        } 
        if(t[n-1] == i)break;
    }

    cout<<tmp<<endl;
	return 0;
}