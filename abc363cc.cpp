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

    int n,k;    cin>>n>>k;
    //小文字から成る文字列(長さN)
    string s;   cin>>s;


    //文字列sを並び替えた文字列のうち, 長さKの回文を部分文字列として, 含まない文字列の個数

    sort(all(s));
    int ans=0;

    do{
        bool ok=1;
        for(int i=0;i<=n-k;i++){
            //iから, k文字
            string t=s.substr(i,k);
            string rt=t;
            reverse(all(rt));
            if(t==rt) ok=false;
        }
        if(ok) ans++;
    }while(next_permutation(all(s)));
    cout<<ans<<endl;
    return 0;
}