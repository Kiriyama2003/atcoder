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
    int n;cin>>n;
    vector<int>a(n),c(n);
    rep(i,n) cin>>a[i]>>c[i];
    
    vector<int> is(n);
    rep(i,n) is[i]=i;
    sort(all(is), [&](int i,int j){return a[i]>a[j];});

    vector<int>ans;
    for(int i:is){
        if(ans.size()==0 || c[ans.back()]>c[i]){
            ans.push_back(i);
        }
    }

    sort(all(ans));     cout<<ans.size()<<endl;
    for(int i:ans){ cout<<i+1<<" ";}   cout<<endl;
    return 0;
}