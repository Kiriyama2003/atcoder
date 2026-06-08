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
void chmin(int& a,int b){a=min(a,b);}
int main(){
    int n,q;    cin>>n>>q;
    //nこのパーツ, q個の指示
    vector<pair<char,int>> s(q);
    //操作を何回かを粉うことで, firstの手を, secondのいちにする
    //指定されていない手を動かすことはできない
    //最小操作回数
    rep(i,q) cin>>s[i].first>>s[i].second;

    int L=1,R=2,ans=0;
    rep(i,q){
        int tmp=0;
        if(s[i].first=='R'){
            //右回り
            int cnt=0;
            for(int check=R+1;(check != R);check++){      //左回り
                cnt++;
                if(check==n+1) check=1;
                if(check==L) break;
                if(check==s[i].second){
                    tmp=cnt;
                    break;
                }
            }
            cnt=0;
            for(int check=R-1;(check != R);check--){      //左回り
                cnt++;
                if(check==0) check=n;
                if(check==L) break;
                if(check==s[i].second){
                    tmp=cnt;
                    break;
                }
            }
            ans+=tmp;
            R=s[i].second;
        }else if(s[i].first=='L'){
            //右回り
            int cnt=0;
            for(int check=L+1;(check != L);check++){      //左回り
                cnt++;
                if(check==n+1) check=1;
                if(check==R) break;
                if(check==s[i].second){
                    tmp=cnt;
                    break;
                }
            }
            cnt=0;
            for(int check=L-1;(check != L);check--){      //左回り
                cnt++;
                if(check==0) check=n;
                if(check==R) break;
                if(check==s[i].second){
                    tmp=cnt;
                    break;
                }
            }
            ans+=tmp;
            L=s[i].second;
        }
    }
    cout<<ans<<endl;
    return 0;
}