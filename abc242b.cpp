#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    string s;   cin>>s;
    
    //解法1
    vector<char> vec((int)s.size());
    for(int i=0;i<(int)s.size();i++){
        vec[i]=s[i];
    }

    sort(all(vec));
    for(auto it:vec) cout<<it;
    cout<<endl;

    //解法2 これでもいいぽい
    sort(all(s));
    cout<<s<<endl;



    return 0;
}