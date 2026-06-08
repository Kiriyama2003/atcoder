#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;
    string s;   cin>>s;
    
    string ans;
    int depth=0;
    //)を見つけたら, 直前の(まで削除
    for(auto c:s){
        if(c==')' and depth>0){
            while(ans.back() != '(') ans.pop_back();
            ans.pop_back(); //(を消す
            depth--;
        }else{
            ans+=c;
            if(c=='(') depth++;
        }
    }
    cout<<ans<<endl;
    return 0;

}