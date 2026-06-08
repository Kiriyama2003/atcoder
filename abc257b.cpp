#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,k,q,x;  cin>>n>>k>>q;
    vector<int> a(n+2);
    for(int i=1;i<=k;i++) cin>>a[i];
    
    /*/解法1
    for(int i=0;i<q;i++){
        cin>>x;
        //左からx番目のコマ　が　1番右のマスにあるならば
        if(a[x]==n) continue;

        //左からx番目のコマ　が　左からk番目のコマなら              
        else if(x==k) a[x]++;   //マスを 1個右へ
        
        //{左からx番目のコマ}のマス {左からx+1番目のコマ}
        else if(a[x]+1 < a[x+1]) a[x]++;
    }*/

    //解法2
    a[k+1]=n+1;
    for(int i=0;i<q;i++){
        cin>>x;
        if(a[x]+1 < a[x+1]) a[x]++;
    }




    for(int i=1;i<=k;i++) cout<<a[i]<<(i!=k?" ":"\n");
    return 0;
}