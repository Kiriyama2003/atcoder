#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
ll gcd(ll x,ll y){if (y==0) return x; return gcd(y, x % y);}//最大公約数
ll lcm(ll x,ll y){return x/gcd(x, y)*y;}   //最小公倍数
int main(){
    int k;  string a,b; cin>>k>>a>>b;
    reverse(all(a));
    reverse(all(b));

    ll aa=0,bb=0;
    for(int i=1;i<=a.size();i++){
        aa+= (a[i-1]-'0') * (ll)pow(k,i-1);
    }
    
    for(int i=1;i<=b.size();i++){
        bb+= (b[i-1]-'0') * (ll)pow(k,i-1);
    }
    //cout<<aa<<" "<<bb<<endl;
    cout<<aa*bb<<endl;


    /*vector<int> aa,bb;

    while(1){
        
        aa.push_back(a%k);
        a/=k;
        if(a==0)break;
    }
    while(1){
        
        bb.push_back(b%k);
        b/=k;
        if(b==0)break;
    }*/
   
    


    return 0;
}