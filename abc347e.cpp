#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //実装で苦戦した
    //解説だけ読んで解法を理解して, ACコードを見ずに実装
    int n,q;    cin>>n>>q;
    vector<int> x(q);
    rep(i,q) cin>>x[i];


    int cnt=0;
    set<int> st;
    vector<ll> t(q,0),tt(q+1,0);
    rep(i,q) {
        if(!st.count(x[i])){
            cnt++;
            st.insert(x[i]);
        }else{
            cnt--;
            st.erase(x[i]);
        }
        t[i]=cnt;
    }
    //rep(i,q) cout<<t[i]<<" ";cout<<endl;
    rep(i,q) tt[i+1]= tt[i]+t[i];



    map<int,int> mp;
    set<int> s;
    vector<ll> ans(n,0);
    rep(i,q){
        if(!s.count(x[i])){
            s.insert(x[i]);
            mp[x[i]]=i;
        }else{
            s.erase(x[i]);
            ans[x[i]-1] += (tt[i] - tt[mp[x[i]]]);
            mp.erase(x[i]);
        }
    }

    
    rep(i,n){
        //文字(i+1)=0　から　nまで
        if(s.count(i+1)){
            ans[i] += (tt[q] - tt[mp[i+1]]); 
        }
    }

    rep(i,n) cout<<ans[i]<<" ";
    cout<<endl;
}