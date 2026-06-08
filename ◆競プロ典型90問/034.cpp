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
const int MOD = 1000000007;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};  //上, 左, 下, 右
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}

int main(){
    int n,k;    cin>>n>>k;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    int right=0,cnt=0,ans=0;
    map<int,int> mp;
    rep(left,n){
        while(right<n){

            //新規なら
            if(mp[a[right]]==0 and cnt == k) break;

            //新規だけど, 空きがあるなら
            if(mp[a[right]]==0) cnt++;

            //新規じゃない
            

            ++mp[a[right]];
            ++right;
        }


        ans = max(ans,right-left);


        if(mp[a[left]]==1) cnt--;
        --mp[a[left]];
    }
    cout<<ans<<'\n';
    return 0;
}