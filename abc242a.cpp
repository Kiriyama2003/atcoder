#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
	int a,b,c,x;    cin>>a>>b>>c>>x;

    if(x<=a) cout<<"1.000000000000"<<endl;
    else if(x<=b) cout<<fixed<<setprecision(15)<<(double)c/(b-(a+1) +1)<<endl;
    else cout<<"0.00000000000"<<endl;
    return 0;
}