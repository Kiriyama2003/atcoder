#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<ll> s(n);
    rep(i,n) cin>>s[i];

    int cnt=0;
    rep(i,n){
        bool check=false;
        for(int a=1;a<=1000;a++){
            for(int b=1;b<=1000;b++){
                if((ll)(4*a*b + 3*a + 3*b) == s[i]) check=true;
            }
        }
        if(!check) cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}