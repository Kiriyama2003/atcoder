#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;      cin>>n;     ll ans=0;
    vector<vector<ll>> a(n,vector<ll>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char c; cin>>c;
            a[i][j]=c-'0';
        }
    }

    vector<int> p={1,1, 1,0, 0,-1,-1,-1},
                q={1,0,-1,1,-1, 1, 0,-1};
                // ↘,→, ↗,↑, ↓, ↙　←  ↖   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        //スタートの位置
            //移動する向き
            for(int k=0;k<8;k++){
                ll now=0,x=i,y=j;


                //n-1回操作を行う
                for(int l=0;l<n;l++){
                    now*=10;
                    now+=a[x][y];
                    
                    x+=p[k];
                    x+=n;   //マイナスになる可能性
                    x%=n;
                    
                    y+=q[k];
                    y+=n;
                    y%=n;
                }
                ans=max(ans,now);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}