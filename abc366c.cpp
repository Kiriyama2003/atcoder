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

    int q;  cin>>q;
    multiset<int> st;
    vector<int> num;
    rep(i,q){
        int ty,x; cin>>ty;
        if(ty==1){
            cin>>x;
            st.insert(x);
        }else if(ty==2){
            cin>>x;
            auto v=st.find(x);
            st.erase(v);
        }else{
            set<int> ms(all(st));
            cout<<ms.size()<<endl;
        }
    }
    return 0;
}