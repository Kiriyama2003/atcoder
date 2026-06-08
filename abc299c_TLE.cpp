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


    int n,ans=0;  string s;   cin>>n>>s;

    //O(N^3)で間に合わない
    for (int i=0;i<s.size();i++) {
		for (int j=i+1;j<=s.size();j++) {

            string tmp=s.substr(i,j-i);
            if(count(all(tmp),'-')==1 && (tmp.back()=='-' || tmp[0]=='-')) ans=max(ans , (int)tmp.size()-1);
		}
	}

    if(ans==0) cout<<-1<<endl;
    else cout<<ans<<endl;


    
    return 0;
}