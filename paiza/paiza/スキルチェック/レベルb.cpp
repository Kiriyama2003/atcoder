#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,k;    cin>>n>>k;
    vector<vector<int>> b(n+1,vector<int>(n+1));
    REP(i,n) REP(j,n) cin>>b[i][j];
    
    set<int> st;
    rep(i,k){ int num; cin>>num;   st.insert(num);}

    vector<vector<bool>> ans(n+1,vector<bool>(n+1,false));
    REP(i,n) REP(j,n){
        if(st.find(b[i][j]) != st.end()) ans[i][j]=true; 
    }

    ans[n/2 + 1][n/2 + 1]=true; int cnt=0;  bool check;
    //行で
    for(int i=1;i<=n;i++){
        check=true;
        for(int j=1;j<=n;j++) if(!ans[i][j]) check=false;
        if(check) cnt++;
    }
    for(int i=1;i<=n;i++){
        check=true;
        for(int j=1;j<=n;j++) if(!ans[j][i]) check=false;
        if(check) cnt++;
    }

    check=true;
    for(int i=1;i<=n;i++) if(!ans[i][i]) check=false;
    if(check) cnt++;

    check=true;
    for(int i=1;i<=n;i++) if(!ans[i][n-i+1]) check=false;
    if(check) cnt++;

    cout<<cnt<<endl;

    return 0;
}
