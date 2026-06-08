#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<double,double>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
double dist(P a, P b) {
  double dx = a.first-b.first, dy = a.second-b.second;
  return sqrt(dx*dx + dy*dy);
}
int main() {
    int N,S,T;  cin>>N>>S>>T;
    vector<int> A(N),B(N),C(N),D(N);
    rep(i,N) cin>>A[i]>>B[i]>>C[i]>>D[i];

    vector<int> order(N);   rep(i,N) order[i]=i;
    double ans = 1e18;
    do{
        rep(dirs,1<<N) {
            double now = 0;
            P pos={0,0};
            rep(i,N) {
                int dir = (dirs>>i) & 1;
                P a = {A[order[i]],B[order[i]]};
                P b = {C[order[i]],D[order[i]]};
                if(dir) swap(a,b);
                //a -> b に統一する

                now += dist(pos,a)/S;
                now += dist(a,b)/T;
                pos = b;
            }
            ans = min(ans, now);
        }
    }while(next_permutation(all(order)));
    cout<<fixed<<setprecision(10)<<ans<<endl;
}