#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    ll x,y,z;   cin>>x>>y>>z;
    string s;   cin>>s;

    //x秒 OFFならaが追加, ONならAが追加
    //y秒 oFFならA ONならa
    //Z秒 ON<=>OFF
    //Sに一致させるのにかかる時間で, 最短
    const ll INF=1e18;
    vector dp((int)s.size()+1,vector<ll>(2,INF));
    dp[0][0]=0;

    rep(i,(int)s.size()){
        int input;
        if(s[i]=='a')       input=0;
        else if(s[i]=='A')  input=1;
        
        //現在jにいる
        rep(past,2){
            //i文字目において, OFF(0),ON(1)の最小値

            //次のモードにいく
            rep(now,2){

                ll v=dp[i][past];  //1個前の同じモード

                if(past!=now) v+=z;  //違うモードにいくなら
                else if(past==now) ;

                if(input==now) v+=x;     //inputと現在のモードが, 一致する
                else if(input!=now)v+=y; //inputと現在のモードが, 一致しない

                dp[i+1][now]=min(dp[i+1][now],v);
            }
        }
    }
    cout<<min(dp[s.size()][0], dp[s.size()][1])<<endl;
    return 0;
}