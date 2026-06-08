#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;     //n個の提出　1<=n<=10^5
    vector<string> s(n+1);
    vector<ll> t(n+1);
    for(int i=1;i<=n;i++) cin>>s[i]>>t[i];

    map<string,int> mp;

    int ans,max_num=-1;
    
    for(int i=1;i<=n;i++){
        if(mp.find(s[i]) == mp.end()){
            mp[s[i]]=1;
            if(max_num<t[i]) {
                max_num=t[i];
                ans=i;
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}