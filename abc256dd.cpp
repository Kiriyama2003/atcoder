#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
constexpr int INF = 1e9 + 6;

set<pair<int,int>> st;


//理解△　むずすぎ


void insert(int l,int r){
    auto itl = st.upper_bound({l,INF});
    auto itr = st.upper_bound({r,INF});

    //itlが, st.begin()　の時実行されない
    if (itl != st.begin()){
        itl--;
       if(itl->second < l) itl++;
    }

    //合成の必要があるとき
    if (itl != itr) {
        l = min(l , itl->first);
        r = max(r, prev(itr)->second);
        st.erase(itl,itr);
    }

    st.insert({l,r});
}

int main() {
    int n;  cin>>n;
    rep(i,n){
        int l,r;    cin>>l>>r;  insert(l,r);
    }

    for (auto it=st.begin();it != st.end();it++) {
        cout<< it->first <<" "<< it->second <<endl;
    }
    return 0;
}