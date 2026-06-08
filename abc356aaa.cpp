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
    int n,l,r;  cin>>n>>l>>r;
    vector<int>A;
    for(int i=1;i<=l-1;i++) A.push_back(i);
    for(int i=r;i>=l;i--) A.push_back(i);
    for(int i=r+1;i<=n;i++) A.push_back(i);
    for(int i=0;i<n;i++) cout<<A[i]<<(i!=(n-1)?" ":"");
    cout<<endl;
    return 0;
}