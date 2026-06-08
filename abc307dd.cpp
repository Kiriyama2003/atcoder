#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;
    string s;   cin>>s;
    
    vector<string>st;
    st.push_back("");
    for(char c:s){
        if(c=='('){
            st.push_back("(");
        }else if(c==')'){
            if(st.size()==1) st.back()+=c;
            else st.pop_back();
        }else{
            st.back()+=c;
        }
    }
    
    for(string t:st) cout<<t;
    return 0;

}