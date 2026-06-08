#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int MAX=101010;

    //エラトステネスのふるい　素数か否か
    //is_prime[i]  
    vector<int> is_prime(MAX,1);
    is_prime[0]=0;  is_prime[1]=0;
    for(int i=2;i<MAX;i++){
        if(is_prime[i]==0) continue;
        for(int j=i*2;j<MAX;j+=i)   is_prime[j]=0;
    }



    //2017-likeな数かどうか
    vector<int> a(MAX,0);   //初期は, 0(2017-likeでない)
    for(int i=0;i<MAX;i++){
        if(i%2 == 0) continue;
        if(is_prime[i] &&  is_prime[(i+1)/2]) a[i]=1;
    }

    //累積和
    vector<int> s(MAX+1);   s[0]=0;
    for(int i=1;i<=MAX;i++) s[i]=s[i-1]+a[i-1];

    //クエリ処理
    int q;  cin>>q;
    rep(i,q){
        int l,r;    cin>>l>>r;  l--;
        cout<<s[r]-s[l]<<endl;
    }
    return 0;
}