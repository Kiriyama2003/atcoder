#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
int main(void){
    int n;  cin>>n;
    list<int> li;
    map<int,list<int>::iterator> mp;
    rep(i,n){
        int a;  cin>>a;
        li.insert(li.end(),a);
        mp[a]=prev(li.end());
    }
    int Q;  cin>>Q;
    while(Q--){
        int t;  cin>>t;
        if(t==1){
            int x,y;    cin>>x>>y;
            auto it = mp[x];
            li.insert(next(it),y);
            mp[y]=next(it);
        }else{
            int x;  cin>>x;
            auto it = mp[x];
            mp.erase(x);
            li.erase(it);
        }
    }
    for(int val : li) cout<<val<<" ";
    cout<<endl;
    return 0;
}