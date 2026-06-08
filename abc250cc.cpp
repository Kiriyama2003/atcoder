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
    int n,q;  cin>>n>>q;

    vector<int> x(q),val(n+1),pos(n+1);
    rep(i,q) cin>>x[i];               //入力
    for(int i=1;i<=n;i++){val[i]=i; pos[i]=i;}   //1~nを格納

    rep(i,q){
        int p0=pos[x[i]];   //入れ替えるボールの値
        int p1=p0;          //入れ替えるボールの値

        if(p0==n) p1--;
        else p1++;

        int v0=val[p0];     //入れ替えるボールの位置
        int v1=val[p1];     //入れ替えるボールの位置

        swap(val[p0],val[p1]);
        swap(pos[v0],pos[v1]);
    }

    
    for(int i=1;i<=n;i++) cout<<val[i]<<(i!=n?" ":"\n");
    return 0;
}
