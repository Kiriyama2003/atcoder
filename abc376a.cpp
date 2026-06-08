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
void chmin(int& a,int b){a=min(a,b);}
int main(){
    int n,c;    cin>>n>>c;
    int last=0;
    int ans=1;

    rep(i,n){
        int t;  cin>>t;
        if(i==0){
            last=t;
        }else{
            if(last+c <= t){
                ans++;  last =t;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}