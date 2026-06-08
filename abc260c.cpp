#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()



/*解法1 再帰関数
int n,x,y;
long long calc(int level,bool is_red) {
    //レベル1, 赤なら 0を返す
    //レベル1, 青なら 1を返す
    if(level==1) return is_red?0:1;

    if(is_red==1){
        return calc(level-1,true) + calc(level,false) *x;
    }else if(is_red==0){
        return calc(level-1,true) + calc(level-1,false) *y;
    }
}

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    cin>>n>>x>>y;
    cout<<calc(n,true)<<endl;

    return 0;
}*/


//解法2 動的計画法
//llでないと, WA
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    ll N,X,Y;   cin>>N>>X>>Y;
    vector<ll> r(12),b(12);
    r[1]=0;     b[1]=1;
    for(int n=2;n<=N;n++){
        b[n]=r[n-1]+b[n-1]*Y;
        r[n]=r[n-1]+b[n]*X;
    }
    cout<<r[N]<<endl;

    return 0;
}