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
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}
int main(void){
    
    string s1,s2;   cin>>s1>>s2;
    if(s1=="sick" and s2 =="sick") cout<<1<<endl;
    if(s1=="sick" and s2 =="fine") cout<<2<<endl;
    if(s1=="fine" and s2 =="sick") cout<<3<<endl;
    if(s1=="fine" and s2 =="fine") cout<<4<<endl;
    return 0;
}