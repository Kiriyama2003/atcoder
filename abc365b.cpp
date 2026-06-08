#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   int n;cin>>n;
   vector<pair<int,int>> a;
    rep(i,n){ int num;   cin>>num;   a.push_back(pair(num,i));}
    sort(rall(a));
    cout<<a[1].second+1<<endl;


    return 0;
}