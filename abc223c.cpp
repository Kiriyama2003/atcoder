#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;
    vector<long double> a(n),b(n);
    
    long double sumtime=0,ans=0;
    rep(i,n){
        cin>>a[i]>>b[i];
        sumtime+=a[i]/b[i];
    }
    sumtime/=2;

    rep(i,n){
        if(sumtime <= a[i]/b[i]){
            ans+=reduce(a.begin(),a.begin()+i);
            ans += sumtime*b[i];
            cout<<fixed<<setprecision(15)<<ans<<endl;
            return 0;
        }else{
            sumtime -= a[i]/b[i];
        }
    }



    return 0;
}