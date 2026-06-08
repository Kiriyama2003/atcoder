#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
bool solve(){
    int n,m;    cin>>n>>m;
    vector<int>deg(n);
    dsu uf(n);
    rep(i,m) {
        int a,b;    cin>>a>>b;
        a--;    b--;
        deg[a]++;   deg[b]++;
        uf.merge(a,b);
    }

    int one=0;
    rep(i,n){
        if(deg[i]==0 || deg[i]>2) return 0;
        if(deg[i] ==1 ) one++;
    }
    if(one != 2) return false;
    if(uf.size(0)!=n) return 0;
    return true;
}
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    /*int node,edge;    cin>>node>>edge;
    dsu uni(node);

    for(int i=0;i<edge;i++){
        int a,b;    cin>>a>>b;  a--;b--;

        if(uni.same(a,b) == 1){
            cout<<"No"<<endl;
            return 0;
        }
        uni.merge(a,b);
    }

    if(node-1!=edge || edge==0){
        cout<<"No"<<endl;
        return 0;
    }

    if(uni.size(0)==node) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;*/

    cout<<(solve()?"Yes":"No")<<endl;
    return 0;   
}