#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod = 1000000007;
int main(){
    int h,w;    cin>>h>>w;
    vector A(h,vector<ll>(w));
    
    rep(i,h) rep(j,w) cin>>A[i][j];
    rep(i,h) rep(j,w) {
        int tmp;    cin>>tmp;
        A[i][j] -= tmp;
    }

    ll ans = 0;
    rep(i,h-1) rep(j,w-1){
        if(A[i][j]>=0){
            ans += A[i][j];
            int tmp = A[i][j];
            A[i][j]     -= tmp;
            A[i+1][j]   -= tmp;
            A[i][j+1]   -= tmp;
            A[i+1][j+1] -= tmp;
        }else{
            ans += abs(A[i][j]);
            int tmp = abs(A[i][j]);
            A[i][j]     += tmp;
            A[i+1][j]   += tmp;
            A[i][j+1]   += tmp;
            A[i+1][j+1] += tmp;
        }
    }

    bool check=true;
    rep(i,h) rep(j,w) if(A[i][j]!=0) check=false;
    if(check) cout<<"Yes\n"<<ans<<'\n';
    else cout<<"No"<<endl;

    return 0;

}