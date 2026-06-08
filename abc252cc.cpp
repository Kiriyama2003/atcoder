#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<string> s(n);
    rep(i,n) cin>>s[i];

    vector<vector<int>> cnt(10,vector<int>(10,0));


    //それぞれの文字列について
    rep(i,n){
        //それぞれの文字列のj番目の文字について
        for(int j=0;j<=9;j++){
            //cnt[k][l]　kの文字が, l番目に, cnt[k][l]個ある
            cnt[s[i][j]-'0'][j]++;
        }
    }
    //for(auto a:cnt){ for(auto aa:a) cout<<aa<<" "; cout<<endl;}

    int ans=1000,mx;
    //iという文字について i=0という文字が, 最も早く揃うと仮定する
    for(int i=0;i<=9;i++){
        mx=0;
        for(int j=0;j<=9;j++) mx=max(mx,10*(cnt[i][j]-1) + j);
        ans=min(ans,mx);
    }
    cout<<ans<<endl;
    return 0;
}