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
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    /*string s;   cin>>s;
    if(s[0]!=s[1] && s[0]!=s[2]) cout<<s[0]<<endl;
    else if(s[0]!=s[1] && s[1]!=s[2]) cout<<s[1]<<endl;
    else if(s[0]!=s[2] && s[1]!=s[2]) cout<<s[2]<<endl;
    else cout<<-1<<endl;*/
    int n;cin>>n;
    while(n%4!=2){
        if(n%4==2) break;
        n++;
    }
    cout<<n<<endl;
    return 0;
}