#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
int n,m;
vector<vector<int>> ans;
void dfs(vector<int> a){
    if(a.size() == n){
        ans.push_back(a);
        return;
    }
    
    int l;
    if(a.size()>0) l = a.back()+10;
    else l=1;
    a.push_back(l);

    while( a.back() + 10*(n-a.size()) <= m){
        dfs(a);
        a.back()++;
    }


}

int main(void){
    cin>>n>>m;
    dfs(vector<int>());
    cout<<ans.size()<<endl;
    for(auto a:ans){
        rep(i,n) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}