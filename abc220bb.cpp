#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
ll gcd(ll x,ll y){if (y==0) return x; return gcd(y, x % y);}//最大公約数
ll lcm(ll x,ll y){return x/gcd(x, y)*y;}   //最小公倍数

ll f(int n,int now,int change){
	if(n==0) return 0;

	ll result=0,place=1;
	while(n>0){
		int remainder =n%now;  //k進数の1桁目
		result += remainder*place;

		n/=now; //次の桁に進む

		place *= change; 	
	}
    return result;
}
int main(){
    ll k,a,b;  cin>>k>>a>>b;
    cout<<f(a,k,10)*f(b,k,10)<<endl;
   
    


    return 0;
}