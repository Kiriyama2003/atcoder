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
    int n;  cin>>n;
    vector<int> look(n),hito_ze(n),ze_hito(n);
    rep(i,n){
        cin>>look[i];
        --look[i];
    }
    rep(i,n){
        cin>>hito_ze[i];
        --hito_ze[i];
    }

    rep(i,n){
        //人i
        ze_hito[hito_ze[i]]=i;
    }

    rep(i,n){
        //ゼッケンの色がi
        int ans=hito_ze[look[ze_hito[i]]];
        cout<<ans+1<<' ';
    }
    cout<<endl;
    

    return 0;
}