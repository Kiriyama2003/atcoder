#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    vector<string> s(3);
    
    set<string> st;
    st.insert("ABC");st.insert("ARC");st.insert("AGC");st.insert("AHC");
    rep(i,3){
        string in;  cin>>in;
        st.erase(in);
    }
    cout<<*begin(st)<<endl;
    return 0;
}