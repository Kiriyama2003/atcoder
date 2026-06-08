#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n,k;  cin>>n>>k;
    vector<int> p(n);
    rep(i,n){int a,b,c;  cin>>a>>b>>c;   p[i]=(a+b+c);}

    
    vector<int> kk=p;
    sort(rall(kk));
    rep(i,n) cout<<((p[i]+300>=kk[k-1])?"Yes":"No")<<endl;

    return 0;
}