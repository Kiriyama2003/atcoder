#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
vector<vector<int>> func(int n,int l,int r){
    if(l>r) return {};
    if(n==0) return {{}};

    vector<vector<int>> ans;

    for(auto x:func(n-1,l,r)){
        vector<int> to={l};
        to.insert(to.end(),x.begin(),x.end());
        ans.push_back(to);
    }

    //lを選ばない場合
    for(auto x:func(n,l+1,r)) ans.push_back(x);

    return ans;
}
int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,l,r; cin>>n>>l>>r;
    vector<vector<int>> ans=func(n,l,r);
    for(auto x:ans){
        for(auto vv:x) cout<<vv<<" ";
        cout<<endl;
    }

    return 0;
}