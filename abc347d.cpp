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
const int M=60;
ll tos(vector<int> x) {
  ll res = 0;
  rep(i,M) res |= ((ll)x[i]<<i);
  // || これだと論理ORで, 1/0しかない
  // |= これだと, ビットOR
  return res;
}
int main() {
    ll a,b,C;   cin>>a>>b>>C;
    ll one = __builtin_popcountll(C);   //Cのうち, 1が立つ数
    ll zero = M-one;                    //Cのうち, 0が立つ個数


    ll d=(a+b-one);     //a+bの1の個数 - Cの1の個数
    //one >= a+b でないといけない
    if((a+b >= one) and d%2 == 0) ;
    else if(d<0 or d%2==1){cout<<-1<<endl; return 0;} //ifなくてもいいが, わかりやすいように書いた

    d/=2;   //(a,b)=(1,1)で相消滅させる, 個数
    a-=d;   //aから, (a,b)=(1,1)で消す個数を引いたもの == (1,0)で使われる個数
    b-=d;   
    if(d>zero or a<0 or b<0){cout<<-1<<endl; return 0;}

    vector<int> x(M), y(M);     //最終的な答えである, x[i]=1なら, i桁は立つ
    vector<int> i0, i1;     //i0={ x,y } Cは, x,yビット目は, 0   
    rep(i,60) {
        if ((C>>i) & 1) i1.push_back(i);
        else i0.push_back(i);
    }
    //C={000000111} 
    
    //i0={3,4,5,6, ... ,59}
    rep(j,d) {
        int i = i0[j];
        x[i] = y[i] = 1;
    }

    //i1={0,1,2}
    rep(j,one) {
        int i = i1[j];
        if(j < a) x[i] = 1;
        else y[i] = 1;
    }

    cout<<tos(x)<<" "<<tos(y)<<endl;
    return 0;
}