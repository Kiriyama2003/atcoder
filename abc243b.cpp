#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<ll> a(n),b(n);
    rep(i,n) cin>>a[i];
    rep(i,n) cin>>b[i];

    /*解法1  O(N)
    vector<ll> tr;
    ll cnt=0;
    vector<bool> useda(n,false),usedb(n,false);
    rep(i,n) {
        if(a[i]==b[i]){
            cnt++;
            useda[i]=true;;
            //a.erase(a.begin()+i); よくないみたい
            //b.erase(b.begin()+i);  よくないみたい
        }
    }
    cout<<cnt<<endl;
    set<ll> st;
    rep(i,n)if(!useda[i]) st.insert(a[i]);
   
    cnt=0;
    for(int i=0;i<n;i++){
        if(useda[i]==true) continue;
        if(st.find(b[i])!=st.end()) cnt++;
    }
    cout<<cnt<<endl;*/
    
    //解法2 O(N^2)
    ll cnt=0;
    rep(i,n) if(a[i]==b[i]) cnt++;
    cout<<cnt<<endl;

    cnt=0;
    rep(i,n){
        rep(j,n){
            if(a[i]==b[j] && i!=j) cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}