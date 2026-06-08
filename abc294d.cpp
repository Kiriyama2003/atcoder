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
    int N,Q;    cin>>N>>Q;
    //Q個のイベント
    //1 受付に呼ばれていない人のうち, 最小の番号の人 が受付に呼ばれる
    //2 人x(呼ばれている前提)　が受付に行く
    //3 呼ばれているが, 行ってない人のうち　最小の番号の人が再び呼ばれる
    set<int>called;
    int last=0;
    rep(i,Q){
        int event;  cin>>event;
        if(event==1){
            called.insert(++last);
        }else if(event==2){
            int x;  cin>>x; called.erase(x);
        }else{
            cout<<*begin(called)<<endl;
        }
    }
    return 0;
}