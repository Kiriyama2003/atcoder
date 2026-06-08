#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n,a;  cin>>n;
    map<int,int> mp;
    for(int i=1;i<=n;i++) {
        cin>>a;
        mp[a]++;
    }

    for(auto it=mp.rbegin();it!=mp.rend();it++){

    }
    
    //納得できたが, 次解けない
    //要素の大きい方から, その要素の個数を出力すればいい
    //そうすると, n種類の要素とすると, n個しか出力されない
    //要素の数だけシュル力すべきであるから, 要素の数-n個, 0を出力する
    for(auto it=mp.rbegin();it!=mp.rend();it++) cout<<it->second<<endl;

    //n-mp.size()個, 0を出力
    for(int i=1;i<=n-(int)mp.size();i++) cout<<0<<endl;
    return 0;
}