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
    queue<int> que;
    vector<ll> height(Q+1);
    height[0]=0;

    for(int i=0;i<Q;i++){
        int t;  cin>>t;
        if(t==1) {
            height[i + 1] = height[i];
            que.push(i);
        }
        if(t == 2) {
            ll add; cin>>add;
            height[i+1] = height[i] + add;
        }
        if (t == 3) {
            height[i + 1] = height[i];
            ll h;    cin>>h;
            int ans = 0;
            while(!que.empty()) {
                if(height[i+1] - height[que.front()] >=h) {
                    ans++;  que.pop();
                } else break;
            }
            cout<<ans<<endl;
        }
    }
	return 0;
}