#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

int n,k;
vector<int> r(8),seq(8);

void solve(int lv){
    //最初lv=0
    //lv==nは, ラストの1回
    if(lv==n){
        //要素の合計が, kの倍数かを判定
        int s=0;
        for(int i=0;i<n;i++) s+=seq[i];

        //出力だけ
        if(s%k==0){
            for(int i=0;i<n;i++) cout<<(i>0?" ":"")<<seq[i];
            cout<<endl;
        }
        return;
    }else if(lv !=n){
        for(int i=1;i<=r[lv];i++){
            seq[lv]=i;
            solve(lv+1);
        }
    }
}
int main(){
    cin>>n>>k;
    //n個の整数で, kの倍数を作れ
    //それぞれ, r_i以下
    rep(i,n) cin>>r[i];
    
    solve(0);
    return 0;
}