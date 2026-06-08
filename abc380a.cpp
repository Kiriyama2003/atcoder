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
	//int n; cin>>n;
	string s;  cin>>s;
    int cnt1=0,cnt2=0,cnt3=0;
    rep(i,6){
        if(s[i]=='1') cnt1++;
        else if(s[i]=='2') cnt2++;
        else if(s[i]=='3') cnt3++;

    }
    if(cnt1==1 and cnt2==2 and cnt3 ==3) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    



	return 0;
}