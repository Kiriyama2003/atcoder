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
    
    ll n,k;     cin>>n>>k;
    vector<ll> a(n+1);
    for(ll i=1;i<=n;i++) cin>>a[i];
    

    vector<ll> cur=a;   sort(all(cur));
    //TLE
    int cnt=1;
    while(cnt){
        cnt=0;
        for(int i=1;i<=n-k;i++){
            if(a[i]>a[i+k]){
                swap(a[i],a[i+k]);
                cnt++;
            }
        }
    }

    cout<<((a==cur)?"Yes":"No")<<endl;

    
    return 0;
}
