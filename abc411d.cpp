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

struct Query{
    int type,index; string s;
};

int main(void){
	int N,Q;    cin>>N>>Q;
    vector<Query> T(Q);
    rep(i,Q){
        cin>>T[i].type>>T[i].index;
        if(T[i].type==2){
            cin>>T[i].s;
            reverse(all(T[i].s));
        } 
    }

    /*だめぽよ
    string serva = "";
    vector<vector<string>> pc(N);

    // TLEだと思うが一応
    // 訂正, chatgptに聞いた
    rep(i,Q){
        if(T[i].type == 1){             // pc <= サーバ
            pc[T[i].index].clear();
            pc[T[i].index].push_back(serva);
        }else if(T[i].type == 2){       // pc += s
            pc[T[i].index].push_back(T[i].s);
        }else{                          //サーバ <= pc
            serva = "";
            for(const auto& s:pc[T[i].index]) serva += s;
        }
    }
    cout<<serva<<endl;
    */



    string ans;
    int i = 0;
    for (int t = Q - 1; t >= 0; t--) {
        // pc <- サーバ
        if (T[t].type == 1) {
            if (i == T[t].index) i = 0;
        }else if(T[t].type == 2) {  // pc += s
            if (i == T[t].index) ans += T[t].s;
            
        } else {    // pc -> サーバ
            if (i == 0) i = T[t].index;
        }
    }
    reverse(all(ans));
    printf("%s",ans);
	return 0;
}