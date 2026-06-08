#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    ll n,m,d;  cin>>n>>m>>d;
    vector<ll> a(n),b(m);
    rep(i,n) cin>>a[i];
    rep(i,m) cin>>b[i];

    sort(all(a));   sort(all(b));

    ll x,y;
    while(true){
        if((n==0) or (m==0)){cout<<-1<<endl; return 0;}
        else{
            x=a.back(); y=b.back();
            if(abs(x-y)<=d){cout<<(x+y)<<endl; return 0;}
            else{
                if(x>y) a.pop_back(),n--;
                else if(x<y) b.pop_back(),m--;
                else if(x==y){
                    if(n>=m) a.pop_back(),n--;
                    else if(n<m) b.pop_back(),m--;
                }
            }
        }
        
    }
    return 0;
}