#include<bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll =long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,m;    cin>>n>>m;
    dsu d(n);
    vector<pair<bool,pair<int,int>>> xy(n,make_pair(false,make_pair(0,0)));
    xy[0]=make_pair(true,make_pair(0,0));
    queue<tuple<int,int,int,int>> que;
    rep(i,m){
        int a,b,dx,dy;  cin>>a>>b>>dx>>dy;
        a--,b--;    d.merge(a,b);
        if(!xy[b].first){
            if(xy[a].first) xy[b]=make_pair(true,make_pair(xy[a].second.first+dx,xy[a].second.second+dy));
            tuple<int,int,int,int> tp=make_tuple(a,b,dx,dy);
            que.push(tp); //a->b 
        }
        if(!xy[a].first){
            //b->a
            if(xy[b].first) xy[a]=make_pair(true,make_pair(xy[b].second.first-dx,xy[b].second.second-dy));
            tuple<int,int,int,int> tp=make_tuple(b,a,-dx,-dy);
            que.push(tp); //b->a
            
        }
    }
    
    if(d.groups().size()!=1) cout<<"undecidable"<<endl;
    else {
        while(!que.size()){
            int a,b,dx,dy;   
            tie(a,b,dx,dy)=que.front(); que.pop();
        
            if(!xy[b].first){
                if(xy[a].first) xy[b]=make_pair(true,make_pair(xy[a].second.first+dx,xy[a].second.second+dy));
                tuple<int,int,int,int> tp=make_tuple(a,b,dx,dy);
                que.push(tp); //a->b 
            }
        }
        rep(i,n){
            cout<<xy[i].second.first<<" "<<xy[i].second.second<<endl;
        }
    }

    return 0;
}