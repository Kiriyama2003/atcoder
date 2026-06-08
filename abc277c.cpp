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

    int n;  cin>>n;
    map<int,vector<int>>graph;
    rep(i,n){
        int a,b; cin>>a>>b; graph[a].push_back(b);  graph[b].push_back(a);
    }

    queue<int> que; que.push(1);
    set<int>S;  S.insert(1);

    //BFS
    while(!que.empty()){  //queに何かしら入っている間
        int v=que.front();
        que.pop();
        for(int i:graph[v]){
            if(S.count(i)==0){
                que.push(i);
                S.insert(i);
            }
        }
    }
    cout<<*S.rbegin()<<endl;
    return 0;
}