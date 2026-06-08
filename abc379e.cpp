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
    int n;  cin>>n;
    string s;   cin>>s;

    reverse(all(s));
  
    int mx = n+50;
    vector<ll> d(mx);
    ll sum = 0;
    for(int i = n-1; i >= 0;i--){
        sum += (s[i]-'0') * (n-i);
        d[i] = sum;
    }

    rep(i,mx) {
        d[i+1] += d[i]/10;
        d[i] %= 10;
    }


    while(d.back() == 0) d.pop_back();

    reverse(all(d));
    for(int digit : d) cout<<digit;
    cout<<endl;
	return 0;
}