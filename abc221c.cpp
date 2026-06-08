#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    string s;   cin>>s;
    sort(all(s));
    ll ans=0;
    do{
        for(int i=1;i<s.size();i++){

            //解法1
            /*string l="",r="";
            for(int j=0;j<i;j++) l+=s[j];
            for(int j=i;j<s.size();j++) r+=s[j];

            if(l[0]=='0' or r[0]=='0') continue;
            ans=max(ans, (ll)stoi(l)*stoi(r));*/


            //解法2
            int l=0,r=0;
            rep(j,i) l= l*10 +s[j]-'0';
            for(int j=i;j<s.size();j++) r= r*10 +s[j]-'0';
            ans=max(ans,(ll)l*r);

            
        }
    }while(next_permutation(all(s)));
    cout<<ans<<endl;


    return 0;
}