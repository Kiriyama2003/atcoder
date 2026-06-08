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
    int n,k;    cin>>n>>k;
    string s;   cin>>s;
    int ans=0,cnt=0;
    rep(i,n){
        if(s[i]=='O') cnt++;
        else cnt=0;

        if(cnt == k){
            ans++;  cnt=0;
        }
    }
    cout<<ans<<endl;
	return 0;
}