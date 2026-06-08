#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    int n,q;    cin>>n>>q;
    string s;   cin>>s;
    //長さnの文字列s  q個のクエリ
    vector<int> b(n+1,0);
    for(int i=0;i<n;i++){
        if(i+1<n && s[i]=='A' && s[i+1]=='C') b[i+1]=b[i]+1;
        else b[i+1]=b[i];
    }

    rep(i,q){
        int l,r;    cin>>l>>r;  l--;r--;
        cout<<b[r]-b[l]<<endl;
    }


    return 0;
}