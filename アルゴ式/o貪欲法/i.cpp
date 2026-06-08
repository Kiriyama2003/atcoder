#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
bool check(vector<bool>& ch){
    rep(i,ch.size()) if(ch[i]==true) return true;
    return false;
}
int main() {
    int n;  cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    vector<bool> ch(n,true);
    int cnt=0;

    while(check(ch)){
        cnt++;
        int ma=-1;
        rep(i,n){
            if(!ch[i]) continue;
            if(ma<a[i]) {
                ma=a[i];
                ch[i]=false;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}