#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
	string s;   cin>>s;
    if(s.find('A')!=string::npos and s.find('B')!=string::npos and s.find('C')!=string::npos and (int)s.size()==3 ) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}