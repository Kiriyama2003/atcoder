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
    int n;  cin>>n;
    long  double pre,now,r;
    rep(i,n){
      

        cin>>now;
        if(i==0){
            pre=now;
        }else if(i==1){
            r = now/pre ;
            pre=now;
        }else{
            if(r!= now/pre){
                cout<<"No"<<endl;
                return 0;
            }
            pre = now;
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}