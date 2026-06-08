#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int a[101][101][101];
int sum[102][102][102];
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    vector<int> a={3,4,8,9,14,23};
    int p,q;    cin>>p>>q;
    if(p>q) swap(p,q);
    cout<<a[p-'A']-a[q-'A']<<endl;

    return 0;
}