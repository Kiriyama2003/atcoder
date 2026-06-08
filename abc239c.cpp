#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int x,y;    cin>>x>>y;
    set<pair<ll,ll>> st;
    st.insert({x+2,y+1});
    st.insert({x+1,y+2});
    st.insert({x-1,y+2});
    st.insert({x-2,y+1});
    st.insert({x-2,y-1});
    st.insert({x-1,y-2});
    st.insert({x+1,y-2});
    st.insert({x+2,y-1});

    cin>>x>>y;
    if(st.count({x+2,y+1}) || st.count({x+1,y+2}) || st.count({x-1,y+2}) || st.count({x-2,y+1}) || st.count({x-2,y-1}) || st.count({x-1,y-2}) || st.count({x+1,y-2}) || st.count({x+2,y-1})) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
