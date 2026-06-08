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
    int n,q;    cin>>n>>q;

    //vector<vector<int>> graph(n);
    map<int,set<int>> gragh;
    while(q--){
        int type;   cin>>type;
        if(type==1){
            int u,v;    cin>>u>>v;  u--,v--;
            gragh[u].insert(v);
            gragh[v].insert(u);

        }else{
            int v,k;    cin>>v>>k;
            if(gragh[v-1].size() < k) cout<<-1<<endl;
            else{
                set<int> st=gragh[v-1];
                auto itr=st.end();
                rep(i,k) itr--;
                cout<<(*itr)+1<<endl;
            }
        }
    }
    return 0;
}