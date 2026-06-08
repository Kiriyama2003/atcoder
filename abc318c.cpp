#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define INF 1e18;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    /*正しいがTLE
    int n,d;ll p;    cin>>n>>d>>p;
    //d個でp円
    vector<ll>F(n);     rep(i,n) cin>>F[i];
    sort(rall(F));
    int cnt=0;

    while(1){
        ll tmp=0;
        bool check=0;
        int Fsize=F.size();
        if(Fsize<=d){
            tmp=accumulate(F.begin(),F.end(),0LL);
            check=1;
        }else tmp=accumulate(F.begin(),F.begin()+d,0LL);
        //cout<<tmp<<endl;
        if(tmp > p) {
            cnt++;
            if(check)   F.erase(F.begin(),F.end());
            else        F.erase(F.begin(),F.begin()+d);
        }else break;
        if(check) break;
    }

    ll sum=0;
    if(F.size()==0) sum=p*cnt;
    else sum=accumulate(F.begin(),F.end(),0LL) + (p*cnt);
    cout<<sum<<endl;*/

    int n,d,p;  cin>>n>>d>>p;
    vector<ll> f(n); rep(i,n) cin>>f[i];
    sort(all(f));

    vector<ll>s(n+1); s[0]=0;
    //s[num] (小さいほうからnum個)の累計和
    rep(i,n) s[i+1]=s[i]+f[i]; //累積和
    int sd=(n+d-1)/d;   // n/dの切り上げ
    //最大のパス購入分

    ll ans=INF;
    for(ll i=0;i<=sd;i++){
        //i=0は 一回も使わない
        ll sum=0;
        //3間分のパスにていして　2日しか使えない
        if(n- i*d>0) sum+=s[n- i*d];
        sum+=p*i;   //パスの購入分
        ans=min(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}