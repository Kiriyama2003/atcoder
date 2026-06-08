#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<pair<ll,ll>> vec(n);
    rep(i,n) cin>>vec[i].first>>vec[i].second;
    

    vector<pair<ll,ll>> ans;

    rep(i,n){
        rep(j,n){
            if(i==j) continue;
            ll a=vec[i].first-vec[j].first;
            ll b=vec[i].second-vec[j].second;
            if(a==0) {
                if(b>0) b=1;
                else b=-1;
            }else if(b==0){
                if(a>0) a=1;
                else a=-1;
            }else if(a*b>0) {
                ll num=__gcd(a,b);
                a/= abs(num); b/=abs(num);
            }else{
                ll num=__gcd(a,b);
                num=abs(num);
                a/=num; b/=num;
            }
            //cout<<a<<" "<<b<<endl;
            ans.push_back({a,b});
        }
    }
    sort(all(ans));
    ans.erase(unique(all(ans)),ans.end());
    cout<<ans.size()<<endl;
    return 0;
}