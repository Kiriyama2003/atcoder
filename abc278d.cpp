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
	int N,Q;    cin>>N;
    vector<ll> A(N);

    fenwick_tree<ll> d(N+1);    //累積だから
    //区間に対して足しこむ
    auto add = [&](int l, int r, ll x) {
        d.add(l,x);     //lにxを足し
        d.add(r,-x);    //rにxを引く
    };

    rep(i,N){
        int tmp; cin>>tmp;
        add(i,i+1,tmp);   //iにaを足し, i+1にaをひく
    }
    

    cin>>Q;

    rep(_,Q){
        int type,i,x;
        cin>>type;
        if(type==1){    //全ての要素をxにする
            cin>>x; sum += x;

            
        }else if(type==2){  //A_iにxを足す
            cin>>i>>x;
            A[i-1] += x;
        }else{              //A_iを出力する
            cin>>i;
            cout<<A[i-1]+sum<<endl;
        }
    }
	
	return 0;
}