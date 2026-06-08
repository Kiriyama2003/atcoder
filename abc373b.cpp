#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    string s;cin>>s;
    int now,next;
    rep(i,(int)s.size()) if(s[i]=='A'){now=i;break;}
    int ans=0;
    for(int i=1;i<=26;i++){
        rep(j,(int)s.size()) if(s[j]==(char)('A'+i)){next=j;break;}
        ans += abs(next-now);
        now=next;
    }
    cout<<ans<<endl;
    return 0;
}