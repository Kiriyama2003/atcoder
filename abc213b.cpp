#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
void chmin(int& a,int b){a=min(a,b);}
int main() {
    int n;  cin>>n;
    vector<P> a(n);
    rep(i,n){
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(all(a));
    cout<<a[n-2].second+1<<endl;

    return 0;
}