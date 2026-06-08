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
    int h,w;    cin>>h>>w;
    vector<string>S(h);
    rep(i,h) cin>>S[i];

    //S[i] 「.」「T」W文字から成る

    rep(i,h){
        rep(j,w-1){
            if(S[i][j]=='T' && S[i][j+1]=='T'){
                S[i][j]='P';S[i][j+1]='C';
            }
        }
    }
    rep(i,h) cout<<S[i]<<endl;
    
    return 0;
}