#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
//S007:データヒストグラム
//https://paiza.jp/works/challenges/43/page/result

string s;
vector<ll> f(int start){
    vector<ll> t(26);

    while(true){
        if(s[start == '(']) f(start);
        if(s[start] == ')') return 
    }
}

int main(void){
    cin>>s;
    vector<ll> ans(26);

    ll now=0;
    while(now < (int)s.size()){
        //アルファベットの時
        if(0 <= (int)(s[now]-'a') && (int)(s[now]-'a')<=26){
            ans[(int)(s[now]-'a')]++;
        }
        //　( のとき
        else if(s[now] == '(') f(now);
        else{  //数字の時
            ll tmp=now;
            now++;
            while(('0' <= s[now]-'a' && s[now] <='9')) now++;
            ll num = stoi(s.substr(tmp,now-tmp));

            if(s[now] == '(') f(now);
            else {
                ans[(int)(s[now]-'a')] += num;
            }
        }

    }

    rep(i,26){
        cout<<(char)('a'+i)<<" "<<ans[i]<<endl;
        if(i!=25) cout<<endl;
    }
	return 0;
}