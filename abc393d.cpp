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
	int n;      cin>>n;
    string s;   cin>>s;
    int s_size = s.size();

    vector<int> po(s_size,0);

    int cnt=0;
    rep(i,s_size){
        if(s[i]=='1') ++cnt;
        else po[i]=cnt;
    }

    cnt=0;
    for(int i=s_size-1;i!=-1;i--){
        if(s[i]=='1') ++cnt;
        else po[i]=min(po[i],cnt);
    }
    int ans=0;
    rep(i,s_size) ans += po[i];

    cnt=0;
    int tmpans=0;
    rep(i,n){
        if(s[i]=='0') ++cnt;
        else tmpans+=cnt;
    }
    ans=min(ans,tmpans);

    cnt=0,tmpans=0;
    for(int i=s_size-1;i!=-1;i--){
        if(s[i]=='0') ++cnt;
        else tmpans += cnt;
    }
    ans=min(ans,tmpans);
    cout<<ans<<"\n";
	
	return 0;
}