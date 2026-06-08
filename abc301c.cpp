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

    string s_in,t_in;   cin>>s_in>>t_in;
    //@ -> a,t,c,o,d,e,r
    //好きなタイミングで, 自由に並び替えることができる
    set<char> atc;
    for(auto c:"atcoder") atc.insert(c);

    int alpha_num_s=0,alpha_num_t=0;
    for(auto c:s_in) if(c=='@') ++alpha_num_s;
    for(auto c:t_in) if(c=='@') ++alpha_num_t;

    bool ok=true;
    for(char c='a';c<='z';c++){
        int num_s=0,num_t=0;
        for(auto sc:s_in) if(sc==c) ++num_s;
        for(auto tc:t_in) if(tc==c) ++num_t;

        if(num_s == num_t) continue;
        else {
            if(atc.count(c)==0) {ok=false; break;}
            else if(num_s>num_t) alpha_num_t -= (num_s - num_t);
            else alpha_num_s -= (num_t - num_s);
        }
    }
    if(alpha_num_s<0 || alpha_num_t<0) ok=false;
    cout<<(ok?"Yes":"No")<<endl;
    

    return 0;
}