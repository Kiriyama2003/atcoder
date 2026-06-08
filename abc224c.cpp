#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;    cin>>n;
    vector<pair<ll,ll>> a(n);
    rep(i,n) cin>>a[i].first>>a[i].second;

    int res=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if((a[j].first-a[i].first)*(a[k].second-a[i].second)
                    -(a[k].first-a[i].first)*(a[j].second-a[i].second)
                    != 0) res++;
            }
        }
  }
  cout<<res<<endl;

    return 0;

}