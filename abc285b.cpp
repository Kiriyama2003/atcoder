#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  string s;   cin>>n>>s;
    for(int i=1;i<n;i++){
        int l=n-i;
        int k_max=0;
        for(int k=1;k<=l;k++){
            if(s[k-1]==s[k+i-1]) {
                k_max=k-1;
                break;
            }
            if(k==l) k_max=l;
        }
        cout<<k_max<<endl;
    }

    return 0;
}