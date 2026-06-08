#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    string s,t; cin>>s>>t;
    vector<int> mi,ma;
    int cnt=0;
    rep(i,s.size()){
        if(s[i]!=t[i]) {
            if(s[i]>t[i]) mi.push_back(i);
            else ma.push_back(i);
            cnt++;
        }
    }
    reverse(all(ma));
    cout<<cnt<<endl;
    rep(i,cnt){
        if(!mi.empty()){
            s[mi[0]]=t[mi[0]];
            cout<<s<<endl;
            mi.erase(mi.begin());
        }else{
            s[ma[0]]=t[ma[0]];
            cout<<s<<endl;
            ma.erase(ma.begin());
        }
    }

    
    return 0;
}
