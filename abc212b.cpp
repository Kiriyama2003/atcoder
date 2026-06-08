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
void chmin(int& a,int b){a=min(a,b);}
int main() {
    vector<char> x(4);
    rep(i,4) cin>>x[i];

    if(x[0]==x[1] and x[1]==x[2] and x[2]==x[3]) cout<<"Weak"<<endl;
    else if( ((int)0+(x[0]-'0')+1 )%10 == (int)0+(x[1]-'0')%10 and
     ((int)0+(x[1]-'0')+1 )%10 == (int)0+(x[2]-'0')%10 and 
     ((int)0+(x[2]-'0')+1 )%10 == (int)0+(x[3]-'0')%10 ) cout<<"Weak"<<endl;
     else cout<<"Strong"<<endl;
    return 0;
}