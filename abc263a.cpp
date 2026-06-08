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
    vector<int>a(5);
    rep(i,5) cin>>a[i];
    sort(all(a));

    if((a[0]==a[2] && a[3]==a[4]) || (a[0]==a[1] && a[2]==a[4])) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}