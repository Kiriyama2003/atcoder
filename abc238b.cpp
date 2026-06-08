#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<int> a(n+2); //添え字0 ~ n+1
    a[0]=0;
    REP(i,n){
        int num;    cin>>num;
        a[i]=(a[i-1]+num)%360;
    }
    a[n+1]=360;
    sort(all(a));
    
    //for(auto aa:a){cout<<aa<<" ";} cout<<endl;

    int max_diff=-1;
    for(int i=1;i<a.size();i++){        //i<=n+1でも可
        if(max_diff < a[i]-a[i-1]) max_diff=a[i]-a[i-1];
    }
    cout<<max_diff<<endl;

    //int mx=-1;
    //REP(i,n) if(mx<a[i]) mx=a[i];
    //cout<<mx<<endl;
    
    return 0;
}