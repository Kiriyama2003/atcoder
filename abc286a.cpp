#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,p,q,r,s;      cin>>n>>p>>q>>r>>s;
    /*
    int a[101];    REP(i,n) cin>>a[i];
    for(int i=1;i<=n;i++){
		if      ((p<=i)&&(i<=q))    cout<<a[i+ (r-p)];
		else if((r<=i)&&(i<=s))     cout<<a[i+(p-r)];
		else cout<<a[i];
        cout<<(i<n?" ":"endl");
	}*/

    vector<int>a(100);
    rep(i,n) cin>>a[i];
    for(int i=p;i<=q;i++){
        swap(a[(i) -1],a[(r-p+i) -1]);
    }
    rep(i,n){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}