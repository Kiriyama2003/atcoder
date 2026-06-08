#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll n;  cin>>n;
    
    /*ll ans=0;
    for(int a=1;a<=cbrt((double)n);a++){
        for(int b=a;b<=sqrt((double)n/a);b++){
            for(int c=b;c<=(double)n/((double)a*b);c++){
                ans++;
            }
        }
    }
    cout<<ans<<endl;*/

    ll ans=0;
	for(ll a=1;  a*a*a<=n; a++){


		for(ll b=a; a*b*b<=n;b++){
            ll maxC=n/(a*b);

            //b以上maxC以下の個数
            ans+= maxC - b + 1;
		}
	}
	cout<<ans<<endl;

    return 0;
}