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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;  cin>>n;
    set<string>st;
    bool ok=1;
    rep(i,n){
        string s;   cin>>s;
        if(s[0]!='H' && s[0]!='D' && s[0]!='C'&& s[0]!='S'){
            ok=0;   break;
        }
        if(s[1]!='A' &&s[1]!='2' &&s[1]!='3' &&s[1]!='4' &&s[1]!='5' &&s[1]!='6' &&s[1]!='7' &&s[1]!='8' &&s[1]!='9' &&s[1]!='T' &&s[1]!='J' &&s[1]!='Q' &&s[1]!='K'){
            ok=0;   break;
        }
        if(st.count(s)){ ok=0; break;}
        st.insert(s);
    }
    cout<<(ok?"Yes":"No")<<endl;
    return 0;
}