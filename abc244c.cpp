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
    
    int n;      cin>>n;
    set<int> st;
    for(int i=1;i<=2*n+1;i++) st.insert(i);
    

    rep(i,n+1) {
        cout<<*begin(st)<<endl<<flush;
        st.erase(*begin(st));
        int num;    cin>>num;   st.erase(num);
    }
    return 0;
}
