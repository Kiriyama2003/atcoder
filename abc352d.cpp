#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,k;    cin>>n>>k;
    vector<int> p(n);
    rep(i,n) {
        int num;    cin>>num;   num--;
        p[num]=i;
    }
    //

    set<int> st;
    rep(i,k) st.insert(p[i]);

    int ans=*st.rbegin()- *st.begin();

    for(int i=k;i<n;i++){
        st.erase(p[i-k]);
        st.insert(p[i]);
        ans=min(ans,*st.rbegin()-*st.begin());
    }
    cout<<ans<<endl;



    return 0;
}