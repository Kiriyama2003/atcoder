#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod = 1000000007;
int main(){
    ll n;  cin>>n;
    string s;   cin>>s;

    vector<ll> dest;
    char tmp = s[0];
    ll count = 1;

    for(int i=1;i<=n;i++){
        if(i==(n)) dest.push_back(count);
        else{
            if(s[i] != tmp){
                dest.push_back(count);
                tmp=s[i], count=1;
            }else ++count;
        }
    }

    ll ans = (n*(n+1))/2;
    //cout<<ans<<'\n';
    for(auto v:dest){
        ans -= ((v*(v+1))/2);
    }
    cout<<ans<<'\n';
    return 0;

}