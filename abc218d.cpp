#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;

    vector<pair<int,int>> xy(n);
    rep(i,n) cin>>xy[i].first>>xy[i].second;
    
    vector<pair<int,int>> st;
    for(int i=0;i<=(n-2);i++){
        for(int j=i+1;j<=(n-1);j++){
            if(xy[i].first==xy[j].first) {
                
                if(xy[i].second < xy[j].second) st.push_back({i,j});
                else st.push_back({j,i});
            }
        }
    }
    int ans=0;
    if(st.size()<=1){cout<<0<<endl; return 0;}
    for(int i=0;i<=(st.size()-2);i++){
        for(int j=i+1;j<=(st.size()-1);j++){
            if(xy[st[i].first].second == xy[st[j].first].second  and 
            xy[st[i].second].second == xy[st[j].second].second) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}