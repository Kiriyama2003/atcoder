#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n,q;  cin>>n>>q;

    vector<ll> front(n+1,-1);
    vector<ll> back(n+1,-1);

    rep(i,q){
        int x,a,b;  cin>>x;
        if(x==1){
            cin>>a>>b;
            //aの後部とbの全部を合体
            back[a]=b;
            front[b]=a;
        }else if(x==2){
            cin>>a>>b;
            //aの後部とbの前部を分離
            back[a]=-1;
            front[b]=-1;
        }else{
            cin>>a;
            //電車aが含まれる連結成分に属する列車を, 先頭から順に出力
            while(front[a] != -1) a=front[a];

            vector<ll> ans;
            while(a != -1){
                ans.push_back(a);
                a=back[a];
            }

            cout<<ans.size()<<" ";
            for(auto v:ans) cout<<v<<" ";
            cout<<endl;
        }
    }

    return 0;
}