#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    /*int n;  cin>>n;
    vector<double> rate(n);
    rep(i,n){
        ll a,b; cin>>a>>b;
        rate[i]=(double)a/(double)(a+b);
    }

    vector<int> ans(n);
    rep(i,n) ans[i]=i;

    sort(all(ans),[&](int i,int j){
        if(rate[i]==rate[j]) return rate[i]>rate[j];
        else return rate[i]>rate[j];});
    
    rep(i,n){
        cout<<ans[i]+1<<" ";
    }*/

    int n;   cin>>n;
    vector<ll> a(n),b(n);
    rep(i,n) cin>>a[i]>>b[i];

    auto cmp=[&](int i,int j)->bool{

        /*if((long double)a[i]/(a[i]+b[i])==(long double)a[j]/(a[j]+b[j])) return i<j;
        else return (long double)a[i]/(a[i]+b[i])>(long double)a[j]/(a[j]+b[j]);*/
        return (long double)a[i]/(a[i]+b[i])>(long double)a[j]/(a[j]+b[j]);
    };

    vector<int> ans(n);
    rep(i,n) ans[i]=i;

    stable_sort(all(ans),cmp);
    //sort(all(ans),cmp); cmpをコメントのにすればいい
    
    rep(i,n) cout<<ans[i]+1<<" ";

    return 0;
}