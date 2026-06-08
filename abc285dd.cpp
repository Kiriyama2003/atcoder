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
    map<string,string> to;
    vector<string> s(n),t(n);
    rep(i,n) cin>>s[i]>>t[i];
    rep(i,n) to[s[i]]=t[i];

    set<string> used;

    for(string ss:s){
        //各頂点の文字列について
        string ns=ss;
        
        while(used.count(ns) == 0){
            used.insert(ns);
            auto it=to.find(ns);

            if(it == to.end()) break; //宛先が存在しないなら

            //宛先が存在するなら
            //ns= it->second;
            ns=(*it).second;    //これでもいい

            //循環して戻ってきたら
            if(ns==ss){cout<<"No"<<endl;return 0;}
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}