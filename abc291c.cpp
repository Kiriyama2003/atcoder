#include<bits/stdc++.h>
using namespace std;
#include<utility>
#include<set>
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
    set<pair<int,int>>st;
    st.insert(make_pair(0,0));
    
    pair<int,int> now=make_pair(0,0);
    rep(i,n){
        if(s[i]=='R'){
            now.first++;
        }else if(s[i]=='L'){
            now.first--;
        }else if(s[i]=='U'){
            now.second++;
        }else if(s[i]=='D'){
            now.second--;
        }
        if(st.count(make_pair(now.first,now.second))) {
            cout<<"Yes"<<endl;
            return 0;
        }
        st.insert(make_pair(now.first,now.second));
        //cout<<now.first<<" "<<now.second<<endl;
    }
    cout<<"No"<<endl;
    return 0;
}