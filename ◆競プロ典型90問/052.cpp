#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;    cin>>n;
    vector<vector<int>> A(n,vector<int>(6));
    ll sum;
    rep(i,n) {
        rep(j,6){
            cin>>A[i][j];
            if(i==0) sum += A[i][j];
        } 
    }

    vector<ll> tmp(6);
    for(int i=0;i<(n);i++){
        
        
        rep(j,6) tmp[j]=A[i][j];
        if(i!=0){
            rep(j,6) tmp[j] = (tmp[j]*sum)%1000000007;
        }
        
        
        sum=0;
        rep(j,6) sum = (sum+tmp[j])%1000000007;

    }
    cout<<sum<<'\n';


    return 0;  
}