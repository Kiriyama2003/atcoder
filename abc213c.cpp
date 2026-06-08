#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll h,w,n;   cin>>h>>w>>n;
    vector<vector<char>> vec(h,vector<char>(w,'*'));
    vector<bool> gyo(h,false),retu(w,false);
    rep(i,n){
        ll a,b; cin>>a>>b;
        a--;b--;
        vec[a][b]=(char)('0'+i+1);
        gyo[a]=true;   retu[b]=true;
    }

    rep(i,h){
        if(gyo[i]){
            rep(j,w){
                if(retu[j]) cout<<vec[i][j];
            }
        }
        cout<<endl;
    }


    return 0;

}
