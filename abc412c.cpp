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
	//int n,m; cin>>n>>m;
	//string s;  cin>>s;
	int T;  cin>>T;

    rep(_,T){
        int N;  cin>>N;
        ll st;  ll gl;
        set<ll> sset;

        rep(i,N){
            if(i==0) {
                ll num; cin>>num;   
                sset.insert(num);
                st = num;
            }
            else if(i==(N-1)) cin>>gl;
            else {
                ll num; cin>>num;   sset.insert(num);
            }
        }

        if( (gl+1)/2 <= st) cout<<2<<endl;

        else{
            int cnt=1;
            bool f = true;

            while(1){
                auto begin = sset.lower_bound((gl+1)/2);
                auto end = sset.lower_bound(gl);


                if( end == begin ){
                    f = false;
                    break;
                }else{
                    cnt++;
                    gl = *begin;
                }

                if(gl == st) break;
                else if(gl < st) {

                    break;
                }
            }
            cout<<(f?cnt:-1)<<endl;
        }
    }
	return 0;
}