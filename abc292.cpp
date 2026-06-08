#include<bits/stdc++.h>
using namespace std;
#include<utility>
#include<set>
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  cin>>n;
	ll ans=0;
	
	for(int AB=1;AB<n;AB++){
        ll X_count=0;     //X=abを満たす(a,b)の個数
		for(int a=1;a*a<=AB;a++){
            //aをjとすると　a<bより　j^2<Xとなる
			if(AB%a==0){     //X = j × 〇
				X_count++;        //a=bの時のみ
				if(AB!=a*a)X_count++;  //(a,b)と(b,a)を考えるから
			}
		}

        ll CD=n-AB;   //N=X+Yを固定している
        ll Y_count=0;     //Y=cdを満たす(c,d)の個数
		for(int c=1;c*c<=CD;c++){
			if(CD%c==0){
				Y_count++;
				if(CD!=c*c)Y_count++;
			}
		}
		ans+=X_count*Y_count;
	}
	
	cout<<ans<<endl;
    return 0;
}