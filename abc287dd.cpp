#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
bool match_or_not(char a,char b){return a=='?' || b=='?' || a==b;}
int main() {
    string s,t;    cin>>s>>t;

    vector<bool> ans(t.size()+1,true);
    rep(ri,2){
        bool ok=true;
        rep(i,t.size()) {
            if(s[i]!=t[i]&&s[i]!='?'&&t[i]!='?') ok=false;
            //i回でもだめなら, 以降ずっとfalse
            if(ok==false) ans[i+1]=false;
        }

        reverse(all(s)); reverse(all(t)); reverse(all(ans));
    }
    rep(i,t.size()+1) cout<<(ans[i]?"Yes":"No")<<endl;
    


    return 0;
}