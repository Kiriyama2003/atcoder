#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

int main(){
    int H,W;    cin>>H>>W;
    vector<vector<int>> a(H,vector<int>(W));
    rep(i,H) rep(j,W) cin>>a[i][j];

    vector<int> h_sum(H),w_sum(W);
    rep(i,H) rep(j,W){
        h_sum[i] += a[i][j];
        w_sum[j] += a[i][j];
    }
    rep(i,H){
        rep(j,W){
            int ans=h_sum[i]+w_sum[j]-a[i][j];
            cout<<ans<<" ";
        }
        printf("\n");
    } 
    

    
    /*vector<vector<int>> w_cnt(W,vector<int>(100));
    rep(i,W) rep(j,H){
        w_cnt[i][a[j][i]]++;
    }
    
    
    vector<vector<int>> h_cnt(H,vector<int>(100));
    rep(i,H) rep(j,W){
        w_cnt[i][a[i][j]]++;
    }

    rep(i,H){
        rep(j,W){
            
            int ans = h_cnt[i][a[i][j]]-1;
            ans += w_cnt[j][a[i][j]];
            cout<<ans<<" ";
        }
        printf("\n");
    }*/
    return 0;  
}