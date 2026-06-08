#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int main(){
    string s;   cin>>s;
    stack<string> st;   st.push("");    //※1のときに, これがないと困る
    set<char> cs;

    for(char c:s){
        if(c=='(') st.push("");
        else if(c==')') {
            for(char x:st.top()) cs.erase(x);
            st.pop();
        }else{
            if(cs.count(c)){cout<<"No"<<endl; return 0;}
            else{
                cs.insert(c);
                st.top() += c;  //※1
            }
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}