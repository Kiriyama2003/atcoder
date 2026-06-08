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
    string s;   cin>>s;
    //vector<char>ss(s.size());
    //rep(i,s.size()) ss[i]=s[i];
    //for(int i=0;i<12-s.size();i++) ss.push_back('0');

    //reverse(all(ss));
    ll sum=0;
    ll ruizyo=1;
    for(int i=s.size()-1;i>-1;i--){

        int num=s[i]-'A'+1;

        sum+= (ruizyo* num);
        ruizyo*=26;
    }
    cout<<sum<<endl;

    return 0;
}