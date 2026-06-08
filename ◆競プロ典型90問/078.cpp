#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()


int main(){
    //n頂点, m辺
    int n,m;    cin>>n>>m;
    vector<vector<int>> v(n);
    rep(_,m){
        int a,b;    cin>>a>>b;
        a--,b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int cnt=0;
    rep(i,n){
        sort(all(v[i]));
        if((int)v[i].size()==0) ;
        else if((int)v[i].size()==1 and v[i][0]<i) cnt++;
        else if(v[i][0] < i and i < v[i][1]) cnt++;
    }
    cout<<cnt<<endl;
    return 0;  
}