#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //std::ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,m;        cin>>n>>m;
    dsu uf(n);  //要素の最大値はn-1
    int ans=0;
    rep(i,m){
        int a,b;    cin>>a>>b;
        a--;    b--;  //dsuには最大値はn-1だから
        if(uf.same(a,b)) ans++;
        else uf.merge(a,b);
    }
    cout<<ans<<endl;

    return 0;
}