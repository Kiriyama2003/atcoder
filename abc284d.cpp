#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
vector<int> Era(int n){
    vector<int> res;
    vector<bool> isprime(n,true);
    isprime[0]=isprime[1]=false;
    for(int i=2;i<n;i++){
        if(isprime[i]){
            res.push_back(i);
            for(int j=i+i;j<n;j+=i) isprime[j]=false;
        }
    }
    return res;
}
int main(){
    ll n;   cin>>n;
    vector<int> pre=Era(1100000);


    ll ans=0;
    for(ll q:pre){
        if(q*q*q > n) break;
        //q^3を固定　p < q

        ll pmax=min(q-1,n/(q*q*q)); //両方満たす必要がある

        ll low=-1,high=pre.size();
        //-1にする必要あり


        while(low +1 != high){
            //high  常に間違い
            //low   常に正しい
            ll x=(low+high)/2;
            if(pre[x]>pmax) high=x; //highを, 下に下げる
            else low=x;             //lowを, 上にあげる
        }


        ans += (low+1); //0indexだから, +1
    }


    cout<<ans<<endl;
    return 0;
}