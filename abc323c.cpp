#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    int n,m;    cin>>n>>m;
    vector<ll>score(m);     rep(i,m) cin>>score[i];
    vector<vector<ll>> eachscore(n,vector<ll>());
    //rep(i,n) copy(ALL(score),back_inserter(eachscore[i]));

    vector<ll>s(n,0); //各人の点数
    //socore 点数の構造
    //eachsocre 各人の点数の構造
    rep(i,n){
        string ss;cin>>ss;
        rep(j,m) {
            if(ss[j]=='o'){
                s[i]+=(score[j]);
                //eachscore[i].erase(eachscore[i].begin()+j);
                continue;
            }
            eachscore[i].push_back(score[j]);
        }
        s[i]+=(i+1);
    }
    rep(i,n) sort(eachscore[i].rbegin(),eachscore[i].rend());

    for(int i=0;i<n;i++){
        ll num=0;
        while(true){
            bool check=0;
            ll  sum=s[i];
            rep(k,num) sum+=(eachscore[i][k]);
            for(int j=0;j<n;j++){
                if(j==i) continue;
                //条件を満たさないとき
                if(sum<s[j]) check=1;
            }
           if(check==0) break;
           num++;
        }
        cout<<num<<endl;
    }
    return 0;
}