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
//上, 左, 下, 右

void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}


const int MOD = 1000000007;


int main(){
    int h,w,q;    cin>>h>>w>>q;

    vector<vector<bool>> s(h,vector<bool>(w,true));
    dsu rel(h*w);

    rep(_,q){
        int type;   cin>>type;
        if(type==1){
            int ni,nj;  cin>>ni>>nj; --ni,--nj;
            s[ni][nj]=false;

            rep(i,4){
                int tmpi=ni+di[i], tmpj=nj+dj[i];
                if(tmpi>=0 and tmpi<h and tmpj>=0 and tmpj<w){
                    if(!s[tmpi][tmpj]){
                        rel.merge(ni*w+nj, tmpi*w+tmpj);
                    }
                }
            }
        }else if(type==2){
            int ni,nj,mi,mj;    cin>>ni>>nj>>mi>>mj;
            --ni,--nj,--mi,--mj;

            if(s[ni][nj]==false and s[mi][mj]==false 
                and rel.same(ni*w+nj, mi*w+mj)) cout<<"Yes"<<'\n';
            else cout<<"No"<<'\n';
        }

    }
    return 0;
}