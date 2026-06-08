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
int main(){
    int n;  cin>>n;
    vector<int> a,b;
    rep(i,n){int num; cin>>num;   a.push_back(num);}
    sort(a.begin(), a.end());

    rep(i,n-1){int num; cin>>num;   b.push_back(num);}

    
    int ok=1000000000,ng=-1;

    //O(n log2(n))
    auto f = [&](int x) -> bool {
        vector<int> nb = b;
        nb.push_back(x);
        sort(all(nb));
        for(int i=0;i<n;i++) if(a[i]>nb[i]) return false;
        return true;
    };

    if(!f(ok)){cout<<-1<<endl;return 0;}
    
    while(ok-ng>1) {
        
        int mid= (ok+ng) / 2;
        if(f(mid)) ok = mid;
        else ng = mid;
    }
    cout<<ok<<endl;
    return 0;
}