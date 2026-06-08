#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    set<string> st;
    rep(i,n){
        string s,t; cin>>s>>t;
        string stt = s + "_" +t;
        if(st.count(stt)){
            cout<<"Yes"<<endl;
            return 0;
        }else st.insert(stt);
    }
    cout<<"No"<<endl;
    return 0;
}