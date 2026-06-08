#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    ll n,a,b,p,q,r,s;   cin>>n>>a>>b>>p>>q>>r>>s;

    //TLE
    set<pair<ll,ll>> st;
    //出力p<=i<=q, r<=j<=s
    for(ll k=max(1-a,1-b);k<=min(n-a,n-b);k++){
        st.insert({a+k,b+k});
    }
    for(ll k=max(1-a,b-n);k<=min(n-a,b-1);k++){
        st.insert({a+k,b-k});
    }

    for(ll i=p;i<=q;i++){
        for(ll j=r;j<=s;j++){
            if(st.find({i,j}) != st.end()) cout<<'#';
            else cout<<'.';
        }
        cout<<endl;
    }


    

    return 0;

}