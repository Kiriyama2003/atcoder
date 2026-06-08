#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n,m;    cin>>n>>m;
    set<pair<int,string>> st;
    rep(i,m){
        int num;    string sex; cin>>num>>sex;
        if(!st.count({num,sex}) and sex=="M") cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        st.insert({num,sex});
    }
    return 0;
}