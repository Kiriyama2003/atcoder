#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,m;    cin>>n>>m;
    vector<string>s(n); //サイズ6
    vector<string>t(m);     //サイズ3

    rep(i,n) cin>>s[i];
    rep(i,m) cin>>t[i];
    int ans=0;
    rep(i,n){
        rep(j,m){
            if(s[i][3]==t[j][0] && s[i][4]==t[j][1] && s[i][5]==t[j][2]){
                ans++;
                break;
            }
        }
        
    }
    cout<<ans<<endl;

    return 0;
}