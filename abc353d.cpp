#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
using mint = modint998244353;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n; mint total=0;
    vector<ll> a(n+1);
    rep(i,n) {cin>>a[i+1]; total+=a[i+1];}
    //for(auto v:a) cout<<v<<" "; cout<<endl;

    vector<int> ketagroup(12,0),kobetu(n+1);
    for(int i=1;i<=n;i++){
        ll tmp=a[i];    int kketa=0;
        while(tmp){
            kketa++;  tmp/=10;
        }
        ketagroup[kketa]++;
        kobetu[i]=kketa;
    }
    //for(auto v:ketagroup) cout<<v<<" ";cout<<endl;
    //for(auto vv:kobetu) cout<<vv<<" ";cout<<endl;

    mint ans=0;  
    
    for(int i=1;i<=(n-1);i++){
        total-=a[i];    ketagroup[kobetu[i]]--;
        //i番目の文字

        for(int j=1;j<=11;j++){ //j桁目
            
            //ll tmp=(ll)pow(10,j) * ketagroup[j];
            ans+= ( (mint) a[i]* (ll)(pow(10,j) * ketagroup[j]));
        }
        ans+=total;
        //cout<<ans.val()<<" ";  
    }
    cout<<ans.val()<<endl;
    return 0;
}