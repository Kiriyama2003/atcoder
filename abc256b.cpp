#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int a[101][101][101];
int sum[102][102][102];
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  cin>>n;
    vector<int> a(n),b(n+1);
    rep(i,n) cin>>a[i];

    /*解法1 累積和
    reverse(all(a));
    b[0]=0;
    for(int i=1;i<=n;i++) b[i]=b[i-1]+a[i-1];
    int cnt=0;
    for(int i=1;i<(int)b.size();i++) if(b[i]>3) cnt++; 
    //for(auto bb:b){cout<<bb<<" ";}    cout<<endl;
    cout<<cnt<<endl;*/

    vector<bool> graph(4,false);
    int p=0;
    for(auto aa:a){
        graph[0]=true;
        //i= 3~0
        for(int i=3;i>=0;i--){
            if(graph[i]==1 && i+aa>3){
                p++;    graph[i]=false;
            }
            else if(graph[i]==1){
                graph[i+aa]=true;
                graph[i]=false;
            }
        }
    }
    cout<<p<<endl;

    return 0;
}