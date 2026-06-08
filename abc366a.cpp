#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);


    int n,t,a;  cin>>n>>t>>a;

    if(t>a+(n-t-a)) cout<<"Yes"<<endl;
    else if(a>t+(n-t-a)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
