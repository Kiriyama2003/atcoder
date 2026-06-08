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
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  cin>>n;
    vector<int> a(n+1);
    rep(i,n) cin>>a[i+1];
    
    int v=1;
    //n回移動をする　最初はv=1である　n回移動したところは, 必ず閉路の一部
    rep(i,n) v=a[v];

    int sv=v;

    //vからスタートして, 再びvに来たら終わり
    vector<int> ans;
    do{
        ans.push_back(v);
        v=a[v];
    }while(v!=sv);



    cout<<ans.size()<<endl;
    for(int v:ans) cout<<v<<" ";
    cout<<endl;
    
    return 0;
}