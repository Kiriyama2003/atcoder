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
    int q;  cin>>q;
    ll now = 0;
    vector<ll> x;
    int id = 0;     //抜けた蛇の数

    rep(i,q){
        int t;  cin>>t;

        if(t == 1){ //追加
            ll l;   cin>>l;
            x.push_back(now);
            now += l;
        }else if(t == 2){   //抜ける
            id++;
        }else{
            int k;  cin>>k; k--;
            cout<<x[id + k] - x[id]<<"\n";
            
            //現在の先頭の蛇_k (0_ndex)
            //対象の蛇_{id+k} (0_index)
        }
    }

    return 0;
}