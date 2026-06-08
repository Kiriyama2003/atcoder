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
    string s,t;     cin>>s>>t;

    for (int i=0;i<s.size();i++) {
		for (int j=i+1;j<=s.size();j++) {
            if(s.substr(i,j-i) == t) {
                cout<<"Yes"<<endl;
                return 0;
            }
		}
	}
    cout<<"No"<<endl;
    return 0;
}