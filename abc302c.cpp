#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,m;    cin>>n>>m;
    //長さmの文字列n個　互いに異なる
    vector<string>s(n);
    rep(i,n) cin>>s[i];
    sort(all(s));

    do{
        bool ok=true;
        for(int i=0;i<n-1;i++){
            int cnt=0;
            for(int j=0;j<m;j++) if(s[i][j]!=s[i+1][j]) cnt++;
            if(cnt!=1) ok=false;
        }
        if(ok){cout<<"Yes"<<endl; return 0;}
    }while(next_permutation(all(s)));
    cout<<"No"<<endl;
    return 0;
}