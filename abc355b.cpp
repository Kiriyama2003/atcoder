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
    int n,m;    cin>>n>>m;
    vector<int>a(n);    rep(i,n) cin>>a[i];
    vector<int>b(m);    rep(i,m) cin>>b[i];
    
    auto c=a;
    rep(i,m) c.push_back(b[i]);
    sort(all(c));
    set<int>st(all(a));

    rep(i,n+m-1){
        if(st.count(c[i]) && st.count(c[i+1])){
            cout<<"Yes"<<endl;  return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}