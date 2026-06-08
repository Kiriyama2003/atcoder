#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    string s;   cin>>s;
    char s1=s[0];
    char s2=s[s.size()-1];

    if((s1>='A' && s1<='Z') && (s2>='A' && s2<='Z')){
        s.erase(0,1);
        s.pop_back();
        if(s.size()!=6) {
            cout<<"No"<<endl;
            return 0;
        }
        int num=stoi(s);
        if(num>=100000 && num<=999999) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }else cout<<"No"<<endl;
    return 0;
}