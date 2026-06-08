#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;  cin>>q;
    /*
    map<ll,ll>mp;
    rep(i,q){
        int type;   cin>>type;
        if(type==1){
            int x;  cin>>x; mp[x]++;
            //if(mp.count(x)) mp[x]++;
            //else mp[x]=1;
            
        }else if(type==2){
            ll x,c;  cin>>x>>c;
            int cnt=min(mp[x],c);
            mp[x]-=cnt;
        }else if(type==3){
            cout<<max(mp)-min(mp)<<endl;
        }
    }*/
    
    
    multiset<ll> st;
    rep(i,q){
        int type;   cin>>type;
        if(type==1){
            int x;  cin>>x;
            st.insert(x);
        }else if(type==2){
            int x,c;  cin>>x>>c;
            while(c-- && st.find(x)!=st.end()){
                st.erase(st.find(x));
            }
            
        }else if(type==3) cout<<*st.rbegin()-*st.begin()<<endl;
    }

    return 0;
}
