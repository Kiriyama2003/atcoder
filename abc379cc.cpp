#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
int main(void){
    ll n,m;    cin>>n>>m;
    vector<pair<ll,ll>> x(m+1);
    x[m]={n,0};
    rep(i,m){
        cin>>x[i].first;
        x[i].first--;
    }
    ll sum=0;
    rep(i,m){
        cin>>x[i].second;
        sum += x[i].second;
    }
    if(sum != n){cout<<-1<<endl; return 0;}

    sort(all(x));
    ll last = 0;

    ll cnt=0;
    rep(i,m){
        if(last!=x[i].first){cout<<-1<<endl; return 0;}
        ll gap = x[i+1].first - x[i].first;
        if(x[i].second < gap){
            cout<<-1<<endl;
            return 0;
        }else{
            cnt += (gap - 1) * gap / 2;
            //cnt += (x[i+1].first-x[i].first-1)*(x[i+1].first-x[i].first)/2;

            x[i+1].second += (x[i].second - (gap));
            cnt += (x[i].second - (gap))* gap;
        }
        last = x[i+1].first;
    }
    cout<<cnt<<endl;
    //rep(i,m) cout<<x[i].second<<" ";
	return 0;
}