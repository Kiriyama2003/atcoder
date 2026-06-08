#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}
int main(void){
    int h,w;    cin>>h>>w;
    vector<string> s(h);
    rep(i,h) cin>>s[i];

    int l=10000,r=-1,u=10000,d=-1;
    rep(i,h) rep(j,w){
        if(s[i][j]=='#'){
            l=min(l,j);
            r=max(r,j);
            u=min(u,i);
            d=max(d,i);
        }
    }

    bool check=true;
    for(int i=u;i<=d;i++){
        for(int j=l;j<=r;j++){
            if(s[i][j]=='.') check=false;
        }
    }
    cout<<(check?"Yes\n":"No\n");
    return 0;
}