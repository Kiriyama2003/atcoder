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

    int n;  cin>>n;
    vector<int> a(n+1);;
    for(int i=1;i<=n;i++) cin>>a[i];

    vector<int> fl(n+1,0),s;
    //fl[i] 0ならまだ行ってない　1なら訪問済み
    //sは, v=1からの訪問順を示す　ここに答えであるresが存在する
    int v=1;
    while(fl[v]==0){
        fl[v]=1;
        s.push_back(v);
        v=a[v];
    }

    //s={3,2,11,5,6, v,...} v以降が答え 
    //vは閉路の最初である
    vector<int> res;
    for(auto &nx:s){
        //nx==vは1回しか成立しない　v=-1になって以降のsがresである
        if(nx==v) v=-1;
        if(v==-1) res.push_back(nx);
    }



    //res={int,int,int,int}　が答え
    cout<<res.size()<<endl;
    rep(i,(int)res.size()){
        cout<<res[i]<<(i!=(int)res.size()-1?" ":"\n");
    }
    return 0;
}