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
    int n;  cin>>n;
    int m = 0;
    //真なら実行される
    while((1<<m) < n) m++;
    cout<<m<<endl;

    rep(i,m){
        vector<int> a;
        //数値jに対して、人i個分右シフト
        rep(j,n) if((j>>i) & 1) a.push_back(j);
        cout<<(int)a.size();

        for(int j : a) cout<<' '<<j+1;
        cout<<endl;
    }

    string s;   cin>>s;
    int ans = 0;
    //m人について
    rep(i,m) if(s[i] == '1') ans |= (1<<i);
    //ans = ans or (1<<i)　これだとだめ
    cout << ans+1 << endl;

    return 0;
}