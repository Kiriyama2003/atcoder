#include <bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
//10進数の数値を, 2進数の文字列に変換
string f(ll n, int k=2){
    if(n == 0) return "0";
    string result = "";
    while(n > 0){
        ll remainder = n % k;  // k進数の1桁目
        result = to_string(remainder) + result;  // 前に追加
        n /= k; // 次の桁に進む
    }
    return result;
}
//2進数の文字列を, 10進数の数値に変換
ll ff(string s,ll k=2){
	ll ans=0;
	for(char x:s){
		ans*=k;
		ans+=x-'0';
	}
	return ans;
}
int main(){
    ll n,x; string s;    cin>>n>>x>>s;

    string ans= f(x); //xを2進数に変換し, 文字列にする

    for(char c:s){
        if(c=='U') if(!ans.empty()) ans.pop_back();
        if(c=='R') ans.push_back('1');
        if(c=='L') ans.push_back('0');
    }

    cout<<ff(ans)<<endl;
    return 0;
}