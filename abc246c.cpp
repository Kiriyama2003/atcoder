#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,k,x;   cin>>n>>k>>x;
    //n個の商品 k枚のクーポン x円分
    vector<ll> a(n);
    ll cnt=0;
    rep(i,n){
        ll num;     cin>>num;
        cnt+=num/x; a[i]=num%x;
    }
    sort(all(a));

    if(cnt<k){  //クーポンが多い
        k-=cnt;
        rep(i,k){
            a.pop_back();
            if(a.empty()){cout<<0<<endl;return 0;}
        } 

        ll s= accumulate(all(a),0LL);
        cout<<s<<endl;

    }else if(cnt == k){
        ll s= accumulate(all(a),0LL);
        cout<<s<<endl;

    }else if(cnt>k){
        
        cnt-=k;
        ll s= accumulate(all(a),0LL);
        s+=cnt*x;
        cout<<s<<endl;

    }






    return 0;
}
