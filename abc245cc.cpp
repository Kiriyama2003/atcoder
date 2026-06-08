#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,k; cin>>n>>k;
    vector<vector<ll>> ab(2,vector<ll>(201010));

    rep(i,2) rep(j,n) cin>>ab[i][j];

    vector<bool> cur={true,true};
    //cur[0] Aがイケてる　cur[1]　Bがいけてるか
    vector<bool> nxt={false,false};

    for(int i=1;i<n;i++){
        for(int from=0;from<2;from++){
            if(cur[from]) {
                for(int to=0;to<2;to++) {
                    if(abs(ab[from][i-1] - ab[to][i]) <= k) nxt[to] = true;
                }
            }
        }
        
        cur[0] = nxt[0];
        cur[1] = nxt[1];
        nxt[0] = nxt[1] = false;
    }
    
    cout<<((cur[0] || cur[1])?"Yes":"No")<<endl;
    return 0;
}
