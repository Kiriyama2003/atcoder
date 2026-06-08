#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
bool match_or_not(char a,char b){return a=='?' || b=='?' || a==b;}
int main() {
    ll x1,x2,y1,y2; cin>>x1>>y1>>x2>>y2;
    ll ans = abs(y1-y2);
    if( abs(x2/2-x1/2) <=ans || ((ans==0)&&abs(x2/2-x1/2)<=1)) cout<<ans<<endl;
    else{
        ans += ans-abs(x2/2-x1/2);
        cout<<ans<<endl;
    }

    return 0;
}
