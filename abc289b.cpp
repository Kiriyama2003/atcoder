#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<(n+1);++i)
#define all(n) (n).begin(),(n).end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,m;    cin>>n>>m;
    if(m==0){
        REP(i,n) cout<<i<<" ";
        cout<<endl;
        return 0;
    }

    stack<int>s;
    vector<int>a(m);
    rep(i,m) cin>>a[i];
    int now=0;

    
    for(int i=1;i<=n;i++){
        s.push(i);
        if(i!=a[now]){
            while(s.empty()==0){
                cout<<s.top()<<" ";
                s.pop();
            }
        } else if(i==a[now]) now++;
    }
    return 0;
}