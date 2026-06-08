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
    int n;  cin>>n;
    vector<pair<string,int>>s(n);
    ll sum=0;
    rep(i,n){
        string ss;int num;
        cin>>ss>>num;
        s[i]=pair(ss,num);
        sum+=num;
    }
    sort(all(s));
    cout<<s[sum%n].first<<endl;
    
    return 0;
}