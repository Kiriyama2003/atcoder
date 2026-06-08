#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
int main() {
    string s;   cin>>s;
    if(s[(int)s.size()-1]=='n' and s[(int)s.size()-2]=='a' and s[(int)s.size()-3]=='s') cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}