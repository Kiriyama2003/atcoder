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
int main(){
    int h,w;    cin>>h>>w;
    vector<string> s(h);
    rep(i,h) cin>>s[i];

   vector x(h, vector<bool>(w));
    rep(i,h)rep(j,w) if(s[i][j] == '#') {
        x[i][j] = true;
        rep(v,4) {
            int ni = i+di[v], nj = j+dj[v];
            if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            x[ni][nj] = true;
        }
    }

    //x[i][j]==true 爆弾のとなり, or 爆弾
    //s[i][j]=="#"   i,jに爆弾

    vector used(h, vector<bool>(w));
    vector last(h, vector<int>(w));
    int tm=0,ans=1;

    rep(si,h)rep(sj,w) if (!x[si][sj]) {
        //爆弾の隣でない　かつ 爆弾でない

        if (used[si][sj]) continue;     //訪問済みなら, continue
        else used[si][sj] = true;       //訪問済みにする

       
        ++tm;   //team-number, 連結成分ごとに決まる
        int cnt=0;
        queue<P> q; q.emplace(si,sj);
        


        while (!q.empty()) {
            auto [i,j] = q.front(); q.pop();
            cnt++;
            rep(v,4) {
                int ni = i+di[v], nj = j+dj[v];

                //範囲外
                if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;

                if(used[ni][nj]) continue;
                if (x[ni][nj]) {    //爆弾のとなりなら
                    //爆弾そのものが入るのでは?
                    //そもそも爆弾の隣は, キューに追加されないから, 爆弾そのものは, ここに来ない
                    if (last[ni][nj] != tm) cnt++, last[ni][nj] = tm;
                    continue;
                }
                

                q.emplace(ni,nj);
                used[ni][nj] = true;
            }
        }

        ans = max(ans, cnt);
    }
    cout<<ans<<endl;



    return 0;
}