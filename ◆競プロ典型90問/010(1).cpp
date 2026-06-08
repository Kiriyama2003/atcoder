#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    
    int n,q;  cin>>n;
    vector<int> a(n,0),b(n,0),aa(n+1,0),bb(n+1,0);

    //入力
    rep(i,n) {
        int n,m;    cin>>n>>m;
        if(n==1) a[i]=(m);
        if(n==2) b[i]=m;
    }
    
    //累積和を作成
    for(int i=1;i<=n;i++) aa[i]= aa[i-1]+a[i-1];
    for(int i=1;i<=n;i++) bb[i]= bb[i-1]+b[i-1];

    //クエリに応答
    cin>>q;
    rep(i,q){
        int n,m;    cin>>n>>m;
        cout<<aa[m]-aa[n-1]<<" "<<bb[m]-bb[n-1]<<endl;
    }
    return 0;  
}