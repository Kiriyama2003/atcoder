#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int h,w,q;    cin>>h>>w>>q;

    vector<set<int>> rowSet(h);
    vector<set<int>> colSet(w);

    rep(i,h) rep(j,w){
        rowSet[i].insert(j);
        colSet[j].insert(i);
    }

    //i行j列の要素を削除
    auto erase=[&](int i,int j){
        rowSet[i].erase(j);
        colSet[j].erase(i);
    };


    rep(i,q){
        int r,c;    cin>>r>>c;  --r;--c;
        auto it=rowSet[r].lower_bound(c);
        
        if(it!=rowSet[r].end() && *it==c) erase(r,c);
        else{
            //右
            if(it != rowSet[r].end()) erase(r,*it);
            
            //左
            it=rowSet[r].lower_bound(c);
            if(it != rowSet[r].begin()) --it,erase(r,*it);

            //下
            it=colSet[c].lower_bound(r);
            if(it != colSet[c].end()) erase(*it,c);
            

            //上
            it=colSet[c].lower_bound(r);
            if(it != colSet[c].begin()) it--,erase(*it,c);
        }
    }
    int ans=0;
    rep(i,h) ans+=rowSet[i].size();
    cout<<ans<<endl;
    return 0;
}