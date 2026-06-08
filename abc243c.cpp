#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n; //n人
    unordered_map<ll,pair<ll,ll>> mp;
    //右向きで,xが最小, 左向きで, xが最大
    
    vector<ll> x(n),y(n);
    rep(i,n) cin>>x[i]>>y[i];

    string s;   cin>>s;

    rep(i,n){
        
        if(s[i]=='R') {
            if(mp.find(y[i])!= mp.end()){
                mp[y[i]].first = min(mp[y[i]].first, x[i]);
                //if(mp[y[i]].first < x[i]) mp[y[i]].first=x[i];
                //else continue;
            }else{
                mp[y[i]].first=x[i];
                mp[y[i]].second=-1;
            }
        }
        if(s[i]=='L') {
            if(mp.find(y[i])!= mp.end()){
                //if(mp[y[i]].second > x[i]) mp[y[i]].second=x[i];
                //else continue;
                mp[y[i]].second=max(mp[y[i]].second,x[i]);
            }else{
                mp[y[i]].second=x[i];
                mp[y[i]].first=1000000010;
            }
        }
    }
    for(auto ii:mp){
        if(ii.second.first < ii.second.second){ cout<<"Yes"<<endl; return 0;}
    }
    cout<<"No"<<endl;

    return 0;
}