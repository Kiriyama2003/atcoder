#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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


int main() {
    ll n;   cin>>n;

    vector<int> primes=Era(1100000);

    int ans = 0;
    for(int p1 : primes) {
        for(int p2 : primes) {
            if(p2 >= p1) break;
            if((ll)p1*p1*p2*p2 > n) break;
            ans++;
        }
    }

    for(int p : primes){
        ll x = 1;
        rep(i,8) x *= p;
        if(x > n) break;
        ans++;
    }
    cout<<ans<<endl;
}
