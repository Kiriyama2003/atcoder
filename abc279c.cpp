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
    int h,w;    cin>>h>>w;
    vector<string>s(h);     rep(i,h) cin>>s[i];
    vector<string>t(h);     rep(i,h) cin>>t[i];

    vector<string>ss(w),tt(w);
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            ss[j].push_back(s[i][j]);
            tt[j].push_back(t[i][j]);
        }
    }

    sort(all(tt));  sort(all(ss));
    cout<<(tt==ss ? "Yes":"No")<<endl;


    return 0;
}