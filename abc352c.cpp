#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n; cin>>n;
    vector<pair<ll,ll>>vec(n);
    ll sum=0;
    rep(i,n) {
        cin>>vec[i].first>>vec[i].second;
        sum+=vec[i].first;
    }
    ll maxx=0;
    rep(i,n){
        maxx=max(maxx,sum-vec[i].first+vec[i].second);
    }
    cout<<maxx<<endl;

    


    /*sort(vec.rbegin(),vec.rend());
    
    ll sum=0;
    for(int i=0;i<n-1;i++) sum+=vec[i].first;
    sum+=vec[n-1].second;


    ll max=0;   ll num=0;
    rep(i,n){
        if(max<=vec[i].second){
            max=vec[i].second;
            if(vec[num].first>vec[i].first){    
                num=i;
            }
        }
    }
    ll summ=0;
    for(int i=0;i<n;i++){
        if(i==num) continue;
        summ+=vec[i].first;
    }
    summ+=vec[num].second;


    if(sum>summ) cout<<sum;
    else cout<<summ;
    cout<<endl;*/

    return 0;
}