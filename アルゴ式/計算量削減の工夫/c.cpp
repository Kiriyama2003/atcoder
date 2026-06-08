#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //正整数n,m
    //3つの正整数の組x,y,z
    //x,y,zの総和がM以下である組み合わせの個数
    int n,m;   cin>>n>>m;
    ll cnt=0;

    for(int i=1;i<=n;i++){
        if(i>=m) continue;
        for(int j=1;j<=n;j++){
            if(i+j >= m) continue;
            cnt += min((ll)n,(ll)m-(i+j));
        }
    }
    cout<<cnt<<endl;
    return 0;
}