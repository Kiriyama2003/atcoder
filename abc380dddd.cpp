#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;

int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
char flip(char c){
  if('a'<=c && c<='z') return (c-'a')+'A';
  else return (c-'A')+'a';
}

int main(){
  string s; cin>>s;
  int q;    cin>>q;
  for(int i=0;i<q;i++){
    if(i) cout<<" ";
    ll k;   cin>>k; k--;
    ll blk = k / (int)s.size();
    ll pt = k % (int)s.size();

    if(__popcount((ll)blk)%2) cout<<flip(s[pt]);
    // if(__builtin_popcountll(blk)%2){
    // if(__builtin_parityll(blk)){
    else cout << s[pt];
  }cout << "\n";
  return 0;
}
