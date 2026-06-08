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
    int n,m;    cin>>n>>m;
    vector<int> x(m);
    vector<ll> a(m);
    rep(i,m) cin>>x[i],x[i]--;
    ll sum=0;
    rep(i,m){
        cin>>a[i]; sum += a[i];
    }
    if(sum != n){
        cout<<-1<<endl; return 0;
    }
    int last=0;
    ll cnt=0;
    rep(i,m){
        if(i==0) {
            if(x[i]!=0) {cout<<-1<<endl; return 0;}
            if(a[i] != (x[i+1]-x[i])){cout<<-1<<endl; return 0;}
            else{
                last=x[i+1];
                cnt+=(x[i+1]-x[i]-1);
            }
        }else if(i==(m-1)){
            if(x[i]!=last){cout<<-1<<endl; return 0;}
            if(a[i] != (n-x[i])){cout<<-1<<endl; return 0;}
            else{
                cnt+=((n-1)-x[i]);
            }
        }else{
            if(x[i]!=last) {cout<<-1<<endl; return 0;}
            if(a[i] != (x[i+1]-x[i])){cout<<-1<<endl; return 0;}
            else{
                last=x[i+1];
                cnt+=(x[i+1]-x[i]-1);
            }
        }
    }
    cout<<cnt<<endl;
	return 0;
}