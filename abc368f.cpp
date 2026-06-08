#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    const int M = 100005;
    vector<int> g(M);   //Mのグランディ数

    vector<vector<int>> divs(M);    //divs[i] = { iより小さいの, iの約数 }

    for(int i=1;i<M;i++) {  //1 ~ M-1
        //iを約数として持つ, 全てのjについて, divs[j]にiを追加
        for(int j=i*2;j<M;j+=i) divs[j].push_back(i);
    }


    for(int i=1;i<M;i++) {
        set<int> st;

        for (int d : divs[i]) st.insert(g[d]);

        while(st.count(g[i])) g[i]++;

        //i=1のとき st={} g[1]=0はstに存在しないから何もしない
        //i=2のとき divs={1} g[約数=1]をstに追加
            //st={g[1]==0} st.count(g[2]==0)よりg[2]=1になる
        //i=3のとき divs={1} g{約数=1}をstに追加
            //st = {g[1]==0} st.count(g[3]==0)より g[3]=1になる
        //i=4のとき divs={1,2} 
            //st={g[1]=0 g[2]=1} st.count(g[4]==0) よりg[4]=1
            //st.count(g[4]==1) よりg[4]=2
            //st.count(g[4]==2) は不成立より, 終了
        
    }

    int n;  cin>>n;
    int x=0;
    rep(i,n) {
        int a;  cin>>a;
        x = x ^ g[a];
    }
    cout<<(x==0?"Bruno":"Anna")<<endl;
    return 0;
}