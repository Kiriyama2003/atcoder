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
    vector<int> k(n);
    vector<vector<int>> a(n);
    rep(i,n) {
      cin>>k[i];
      a[i] = vector<int>(k[i]);
      rep(j,k[i]) cin >> a[i][j];
    }
  

    /*事前にmap作った方がいいと思ったが, オーバーヘッドで襲い
    double ans = 0;
    map<int,map<int,int>> cnt;

    rep(i,n){
        //i番目のサイコロ
        rep(j,k[i]){
            //j番目のマス目
            ++cnt[i][a[i][j]];
        }
    }

    rep(i,n) rep(j,i) {
      double now = 0;
      
  
      for (int na : a[i]) now += cnt[j][na];

      now /= k[i];
      now /= k[j];
  
      ans = max(ans,now);
    }
    printf("%.10f\n", ans);
    */

    //毎回計算した方がいい
    double ans = 0;
    rep(i,n)rep(j,i) {
        double now = 0;
        
        unordered_map<int,int> cnt;
        for (int na : a[j]) cnt[na]++;
    
        for (int na : a[i]) now += cnt[na];
        now /= k[i];
        now /= k[j];
    
        ans = max(ans,now);
    }
    printf("%.10f\n", ans);
    return 0;
}