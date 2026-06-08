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
    //スイッチn個　電球m個
    int n,m;    cin>>n>>m;
    vector<vector<int>> S(10,vector<int>());
    int P[10];

    for(int i=0;i<m;i++){
        int k;  cin>>k;
        for(int j=0;j<k;j++){
            int s;  cin>>s; s--;
            S[i].push_back(s);
        }
    }

    int ans=0;
    //for(int i=)
    return 0;
    rep(i,m) cin>>P[i];
}