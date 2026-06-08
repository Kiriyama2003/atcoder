#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,q;     string s;     cin>>n>>s>>q;
    vector<int> it(n);  //個別の更新時間(0~q-1)
    int last=-1,type;  //last：全体更新の時間　//更新タイプ
    for(int qi=0;qi<q;qi++){
        int t,x;    char c; cin>>t>>x>>c;
        if(t==1){
            x--;    s[x]=c; it[x]=qi;
        }else{ last=qi;    type=t;}
    }
    rep(i,n){
        if(it[i]<last){
            if(type==2) s[i]=tolower(s[i]);
            if(type==3) s[i]=toupper(s[i]);
        }
    }
    cout<<s<<endl; 

    return 0;
}
