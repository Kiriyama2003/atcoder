#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int INF = 1001001001;

struct Trie{
    vector<map<char,int>> to;
    vector<int> nearest;

    //コンストラクタ
    Trie(): to(1), nearest(1) {}

    int add(const string& s) {
        int res = s.size();
        int v = 0;


        rep(i,s.size()) {
            //行先がないなら
            if(!to[v].count(s[i])) {
                int u = to.size();
                to.push_back(map<char,int>());
                nearest.push_back(INF);
                to[v][s[i]] = u;
            }
            
            v = to[v][s[i]];
            int dist = s.size()-i-1;

            //
            res = min(res, nearest[v]+dist);

            nearest[v] = min(nearest[v], dist);
        }
        return res;
    }
};

int main() {
	int n;  cin>>n;
    Trie t;
    rep(i,n) {
        string s;   cin>>s;
        cout<<t.add(s)<<endl;
    }
    return 0;
}