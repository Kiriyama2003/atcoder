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
	int n,q;    cin>>n>>q;



    int cnt=0;  //複数の鳩がいる巣 の個数


    vector<int> hato(n);    //hato[i]:鳩iがいる巣の場所
    rep(i,n) hato[i]=i;


    map<int,set<int>> mp;    //[巣i][鳩?]
    rep(i,n) mp[i].insert(i);


    rep(_,q){
        int type;   cin>>type;
        if(type==1){
            //鳩Pを巣toに移動させる
            //但し, 鳩Pは巣toにいない事が保証される
            int P,to;   cin>>P>>to;

            if(mp[hato[P-1]].size() ==2) cnt--;
            mp[hato[P-1]].erase(P-1);

            if(mp[to-1].size()==1) cnt++;
            mp[to-1].insert(P-1);
            hato[P-1]=to-1;



        }else if(type==2){
            //"複数の鳩がいる巣"の個数を出力
            cout<<cnt<<"\n";
        }
    }
	return 0;
}