#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int N,M;    cin>>N>>M;

    // 辞書型の変数を用意する
    unordered_map<string, int> d;

    rep(i,N){
        string S;   int P;  cin>>S>>P;
        string s = "";
        for (int j = 0; j < min(100, (int)S.length()); ++j) {
            s += S[j];  // 1 文字ずつ増やす
            d[s] += P;  // S の先頭から i 文字目までの部分文字列の価値を +P にする
        }
    }

    rep(i,M){
        string Q;   cin>>Q;
        cout<<d[Q]<<endl;
    }

    return 0;
}
