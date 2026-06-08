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
    string s;   cin>>s;
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(i+1);
        if(s[i]==')'){
            cout<<st.top()<<" "<<i+1<<endl;
            st.pop();
        } 
        
    }
    return 0;
}