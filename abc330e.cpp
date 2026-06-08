#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,q;    cin>>n>>q;
    vector<int> bk(n+1,0),a(n);
    rep(i,n){
        cin>>a[i];
        if(a[i]<=n) bk[a[i]]++;
    }

    set<int> st;
    for(int i=0;i<=n;i++){
        if(bk[i]==0){st.insert(i);}
    }

    while(q--){
        int i,x;    cin>>i>>x;  i--;

        //今から消すってこと
        if(a[i]<=n){
            bk[a[i]]--;
            if(bk[a[i]]==0){st.insert(a[i]);}
        }

       

        if(x<=n){
            if(bk[x]==0){st.erase(x);}
            bk[x]++;
        }
        a[i] = x;
        cout<<(*st.begin())<<endl;
    }
    return 0;
}