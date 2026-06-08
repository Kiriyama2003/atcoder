#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n,k;  cin>>n>>k;

    vector<int> p(n),qq;

    rep(i,n){
        int a,b,c;  cin>>a>>b>>c;
        p[i]=(a+b+c);
    }

    
    qq=p;
    sort(all(qq));
    rep(i,n){
        int num=qq.end() - upper_bound(all(qq),p[i]+300) +1;
        //cout<<num<<" ";
        if(num <= k) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}