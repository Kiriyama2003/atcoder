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
int main(void){
    int N,D;    cin>>N>>D;
    string S;   cin>>S;
    int cnt =0;
    rep(i,N) if(S[i]=='@') cnt++;
    cout<<D+(N-cnt)<<endl;


    
    return 0;
}