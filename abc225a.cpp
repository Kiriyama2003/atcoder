#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    /*string s;   cin>>s;
    if(s[0]!=s[1] && s[1]!=s[2] && s[0]!=s[2]) cout<<6<<endl;
    else if(s[0]==s[1]&& s[1]==s[2]) cout<<1<<endl;
    else cout<<3<<endl;*/

    //解法2
    string s;   cin>>s;
    sort(all(s));
    set<string> st;
    do{
        st.insert(s);
    }while(next_permutation(all(s)));
    cout<<st.size()<<endl;
    return 0;
}