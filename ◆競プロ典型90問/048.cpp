#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,k;    cin>>n>>k;

    priority_queue<int> st;

   
    /*rep(i,n){
        int num,numm;   cin>>num>>numm;
        a.push({num,i});
        b.push({numm,i});
    }    
    vector<int> used(n,true);


    ll ans=0;
    while(k>0){
        if(k==1){
            
        }else{
            
        }
    }*/
    rep(i,n){
        int a,b;    cin>>a>>b;
        st.push(b);
        st.push(a-b);
    }
    ll ans=0;
    rep(i,k){
        ans += st.top();
        st.pop();
    }
    cout<<ans<<'\n';
    

    return 0;  
}