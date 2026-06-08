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
const int INF = 1001001001;

int op(int a, int b) { return min(a,b);}    //2つのマスの処理
int e() { return INF;}      //初期値


//写像　区間内にあるやつに対して　変更クエリを表す
int mapping(int f, int x) { return min(x,f);}  
int composition(int f, int g) { return min(f,g);} //関数合成
int id() { return INF;}                             //

//各列の置くことができる一番下を保持する
//minとる

int main(void){
    int h,w,n;  cin>>h>>w>>n;

    vector<tuple<int,int,int,int>> bars;
    rep(i,n) {
        int r,c,l;  cin>>r>>c>>l;
        c--;
        bars.emplace_back(r,c,c+l,i);
    }
    //逆順にソート
    sort(bars.rbegin(), bars.rend());

    lazy_segtree<int,op,e,int,mapping,composition,id> t(vector<int>(w,h));

    vector<int> ans(n);
    for(auto [_,l,r,bi] : bars) {
        int x = t.prod(l,r);    //置くことができるmin
        ans[bi] = x;            //答えを格納
        t.apply(l,r,x-1);       //更新する
    }

    rep(i,n) cout<<ans[i]<<endl;
    return 0;
}