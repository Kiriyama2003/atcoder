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
    
    ll n,a,b;  cin>>n>>a>>b;

    ll acnt=n/a;
    ll bcnt=n/b;

    ll sum=(n*(n+1))/2;
    sum-= a* ((acnt*(acnt+1))/2);
    sum-= b* ((bcnt*(bcnt+1))/2);



    ll abvalue=lcm(a,b);    //cout<<abvalue<<" ";
    ll abcnt=n/abvalue;
    sum+= abvalue* ((abcnt*(abcnt+1))/2);

    //for(int i=1;i<=n;i++) if((i%a != 0) && (i%b != 0))sum+=i;


    cout<<sum<<endl;
    return 0;
}
