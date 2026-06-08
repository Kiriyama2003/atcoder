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
    int Q;  cin>>Q;
    multiset<ll> plants;
    ll total = 0;

    while(Q--){
        int type; cin>>type;

        if(type == 1){
            plants.insert(-total);
        } 
        else if(type == 2){
            ll T;   cin>>T;
            total += T;
        } 
        else if(type == 3){
            ll H;   cin>>H;

            ll target = H - total;
            auto itr = plants.lower_bound(target);
            
            cout<<distance(itr, plants.end())<<endl;

            plants.erase(itr, plants.end());
        }
    }
	return 0;
}