#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
bool match_or_not(char a,char b){return a=='?' || b=='?' || a==b;}
int main() {
    string s,t;    cin>>s>>t;
    //|s| > |t|
    vector<int> pre(s.size()+1,false),suf(s.size()+1,false);
    //pre[i]：先頭からi文字マッチする
    //suf[j]：後ろからj文字マッチする

    pre[0]=true;   //先頭から0文字マッチする, 当然なにもないから
    for(int i=0;i<t.size();i++){
        if(match_or_not(s[i],t[i]) == 0) break; //1回でも違ったら, 終わる
        pre[i+1] = true;
    }

    reverse(all(s));    reverse(all(t));
	
	suf[0] = true;
	for(int i=0;i<t.size();i++){
		if(!match_or_not(s[i],t[i])) break; //1回でも違ったら, 終わる
		suf[i+1] = true;
	}

    for(int i=0;i<=t.size();i++){
		if(pre[i] && suf[t.size()-i]) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
    return 0;
}