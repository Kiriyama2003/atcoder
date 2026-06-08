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
	int a,b,c; cin>>a>>b>>c;
	//string s;  cin>>s;

    if(a==b and b==c){
        cout<<"Yes"<<endl;
    }else if(a+b == c or a+c==b or b+c==a){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No\n";
    }


	


	return 0;
}