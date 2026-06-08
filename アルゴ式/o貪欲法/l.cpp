#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;
    vector<int> start(n),trail(n);
    rep(i,n) cin>>start[i]>>trail[i];


    vector<int> ids(n);
    rep(i,n) ids[i]=i;
    sort(all(ids),  [&](int i,int j){return trail[i]<trail[j];}   );

    //for(auto i:ids) cout<<i<<" ";

    int res=0,last_time=0;
    for(auto i:ids){
        //予定iの開始時刻が, 全会終了時刻より早い場合
        if(start[i]<last_time) continue;    //スキップ

        res++;
        last_time=trail[i];
    }
    cout<<res<<endl;
    return 0;
}