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
int main(void){
    int n;  cin>>n;
    vector<pair<int,int>> q(n);
    rep(i,n) cin>>q[i].first>>q[i].second;
    int Q;  cin>>Q;
    
    while(Q--){
        int type,day;  cin>>type>>day;
        type--;
        if(day<=q[type].second) cout<<q[type].second<<endl;
        else{
            int a=day/q[type].first;
            a *= q[type].first;
            a += q[type].second;
            if(day > a) a += q[type].first;
            cout<<a<<endl;
        }
        
    }
    return 0;
}