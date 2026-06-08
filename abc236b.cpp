#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;  cin>>n;
    int x=0;
    rep(i,4*n-1){
        int num;    cin>>num;
        x=x xor num;
    }
    cout<<x<<endl;



    /*int n;  cin>>n;

    vector<int> a(4*n);
    for(int i=1;i<=4*n-1;i++) cin>>a[i];

    int ans=0;
    for(int i=1;i<=4*n-1;i++) ans=ans^a[i];
    cout<<ans<<endl;*/
    return 0;
}
