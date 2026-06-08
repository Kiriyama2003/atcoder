#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll x;   cin>>x;
    vector<ll> res={0};
    for(int d=0;d<60;d++)
    {   //1ll：long long型の1
        if(x & (1ll<<d)){   //xのd桁目が, 1なら
            int sz=res.size();
            for(int i=0;i<sz;i++){
                res.push_back(res[i] | (1ll<<d));
            }
        }
    }

    sort(all(res));
    for(auto i:res) cout<<i<<endl;

    return 0;
}