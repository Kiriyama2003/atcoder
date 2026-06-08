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

using mint = modint998244353;

int main(void){
	//int n,m; cin>>n>>m;
	//string s;  cin>>s;
    int q;  cin>>q;

    deque<int> S(1,1);  //要素数1,全ての数が1
    mint ans = 1;

    rep(i,q){
        int type,x; cin>>type;
        if(type==1){    //末尾にxを追加
            cin>>x; 
            S.push_back(x);
			ans = ans*10 + x;
        }else if(type == 2){    //先頭の文字を削除
            //mint(10)は, mint型の10
            //それを何乗するかが, 後ろにきているだけ
            ans -= mint(10).pow(S.size()-1) * S.front();
			S.pop_front();
        }else{      //余りを出力
            cout<<ans.val()<<endl;
        }
    }
	
	return 0;
}