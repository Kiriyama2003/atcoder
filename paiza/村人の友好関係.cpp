#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int N,M,Q;  cin>>N>>M>>Q;
    //村人N人が, Q個のクエリ

    vector<tuple<int,int,int>> edge(M);
    rep(i,M){
        int a,b,f;  cin>>a>>b>>f;   --a,--b;
        edge[i] = make_tuple(f, a, b);
    }

    // 友好度が大きい順にソートする
    sort(all(edge), [](const tuple<int, int, int>& x, const tuple<int, int, int>& y) {
        return get<0>(x) > get<0>(y);
    });

    // group[i] := 村人 i がグループに存在しているかどうか
    vector<bool> group(N, false);

    for (int i = 0; i < Q; ++i) {
        char op;    int q;  cin>>op>>q; --q;

        if(op == '+') group[q] = true;
        else group[q] = false;

        bool found = false; //見つけてない
        for (const auto& e : edge) {
            int f, a, b;
            tie(f, a, b) = e;
            // 2 人ともグループに所属 or 2 人とも未所属の場合は調べない
            if(group[a] == group[b]) continue;

            cout<<f<<endl;
            found = true;   //見つけた
            break;
        }

        // グループが 0 人または N 人の場合は人気度が 0
        //1回も, group[a] != group[b]となってない
        if (!found) cout<<0<<endl;
    }

    return 0;
}