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
	int n,q;    cin>>n>>q;

    //cnt[c] :=色c(i<=c<=n)で塗られているマスの個数
    vector<int> cnt(n+2,1),l(n+2), r(n+2), col(n+2);
    //col[i] := "マスiを含む"グループの色
    //l[i]   := "マスiを含む"グループの左端
    //r[i]   := "マスiを含む"グループの右端

    //[0]と[n+1]は, 番兵の役割

    dsu uf(n+2);
    rep(i,n+2) l[i] = r[i] = col[i] = i;

    rep(qi,q) {
        int type,x,c;   cin>>type;
        if(type == 1){
            cin>>x>>c;  //マスx以降を, 色cにする
            int leader = uf.leader(x);
            int sz = uf.size(x);

            cnt[col[leader]] -= sz;      //引く
            col[leader] = c;             //色を変える
            cnt[col[leader]] += sz;      //足す

            
            //左の
            int l_leader = uf.leader(l[uf.leader(x)]-1);

            if(col[l_leader] == c) {
                uf.merge(l_leader, x);

                l[uf.leader(x)] = l[l_leader];  //元のグループの左を, 左のグループの左に設定
                r[uf.leader(x)] = r[leader]; //元のグループの右を, 左のグループの右に設定
                col[uf.leader(x)] = c;
            }
            
            int r_leader = uf.leader(r[uf.leader(x)]+1);
            if(col[r_leader] == c) {
                int nl = l[uf.leader(x)];   //これ中尉
                uf.merge(r_leader,x);

                l[uf.leader(x)] = nl;
                r[uf.leader(x)] = r[r_leader];
                col[uf.leader(x)] = c;
            }
            
        }else{
            cin>>c;     //色cに塗られているマスの個数
            cout<<cnt[c]<<endl;
        }
    }
	return 0;
}