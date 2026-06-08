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
    int n,k;    cin>>n>>k;
    vector<int>a(n);
    rep(i,n) cin>>a[i];
    int cnt=0;  int seat=0;

    while(a.size()!=0){
        if(k-seat >= a[0]){
            seat+=a[0];
            a.erase(a.begin());
        }else{seat=0; cnt++;}
    }
    cnt++;
    cout<<cnt<<endl;
    return 0;
}