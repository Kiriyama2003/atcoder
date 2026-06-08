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
//abc382b.cpp と変わらない
//違いは, 整理しただけ
int main(void){
    int N,D;    cin>>N>>D;
    string S;   cin>>S;

    vector<int> pos;

    rep(i,N){
        if(S[i]=='@') pos.push_back(i);
    }
    
    rep(i,D){
        S[*pos.rbegin()] = '.';
        pos.pop_back();
    }
    
    cout<<S<<endl;
    return 0;
}