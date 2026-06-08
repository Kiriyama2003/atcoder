#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,k;    cin>>n>>k;
    //4人　k人は明かりを持つ
    vector<int> a(k);
    //明かりをもつ人
    for(int i=0;i<k;i++){
        int num;    cin>>num;   num--;
        a[i]=num;
    }
    //for(auto &nx:a){cin>>nx; nx--;}

    vector<pair<ll,ll>> x(n);
    rep(i,n) cin>>x[i].first>>x[i].second;

    long long res=0;
    for(int i=0;i<n;i++){
        long long cres=8e18;
        for(int j=0;j<k;j++){
            cres=min(cres,
            (x[i].first-x[a[j]].first)*(x[i].first-x[a[j]].first) 
            + (x[i].second-x[a[j]].second)*(x[i].second-x[a[j]].second));
        }
        //cresは, 最も近い明かりからの, 距離
        /*for(auto &nx : a){
            cres=min(cres,
            (x[i].first-x[nx].first)*(x[i].first-x[nx].first) 
            + (x[i].second-x[nx].second)*(x[i].second-x[nx].second));
        }*/
        //resは, 最も近い明かりからの距離の最大値
        res=max(res,cres);
    }
    cout<<fixed<<setprecision(15)<<sqrt((double)res)<<endl;
    //printf("%.12lf\n",sqrt((double)res));
    return 0;
}