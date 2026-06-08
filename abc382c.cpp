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
//キューで書き直してもいいね
//配列ans　をつくらずに, 配列memで　二分探索すればいい感じ？
int main(void){
    int n,m;    cin>>n>>m;
    vector<int> a(n),b(m);
    rep(i,n) cin>>a[i];
    rep(i,m) cin>>b[i];

    vector<int> mem;
    int tmp=300000;
    rep(i,n){
        if(tmp > a[i]){
            tmp = a[i];
            mem.push_back(i);
        }
    }
    mem.push_back(-2);
    //for(auto aa:mem) cout<<aa<<" ";

    vector<int> ans(300000);
    int pos=0;
    for(int i=200010;i>0;i--){
        if(mem[pos] != -2){
            if(i<a[mem[pos]]) pos++;
        }
        ans[i] = mem[pos];
    }

    rep(i,m) cout<<ans[b[i]]+1<<endl;
    return 0;
}