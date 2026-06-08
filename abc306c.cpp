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
    vector<vector<int>>a(n);
    rep(i,3*n){
        int num;    cin>>num;
        a[num-1].push_back(i+1);
    }


    vector<pair<int,int>>b;
    rep(i,n) b.push_back(pair(a[i][1],i+1));

    sort(all(b));
    rep(i,n) cout<<b[i].second<<" ";
    cout<<endl;
    return 0;
}