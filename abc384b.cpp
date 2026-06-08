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
int main() {
    int N,R;    cin>>N>>R;
    vector<pair<int,int>> p(N);
    rep(i,N) cin>>p[i].first>>p[i].second;

    rep(i,N){
        if(1600<=R and R<=2799 and p[i].first==1){
            R+=p[i].second;
        }else if(1200<=R and R<=2399 and p[i].first==2){
            R += p[i].second;
        }
    }
    cout<<R<<endl;


    return 0;
}