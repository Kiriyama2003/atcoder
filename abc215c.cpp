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
void chmin(ll& a,ll b){a=min(a,b);}
const ll INF = 1e18;


int main(){
    string s;   cin>>s;
    int k;  cin>>k;
    int now=1;
    sort(all(s));
    do {
        if(now==k){cout<<s<<endl; return 0;}
        now++;
    }while(next_permutation(all(s)));
    
    return 0;
}