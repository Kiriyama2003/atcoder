#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n;  cin>>n;
    vector<pair<int,int>> vec(n);
    rep(i,n) cin>>vec[i].first>>vec[i].second;

    int mx=-1;
    rep(i,n){
        rep(j,n){
            //if(i==j) continue;
            /*if(mx<(vec[i].first-vec[j].first)*(vec[i].first-vec[j].first)+(vec[i].second-vec[j].second)*(vec[i].second-vec[j].second)) mx=(vec[i].first-vec[j].first)*(vec[i].first-vec[j].first)+(vec[i].second-vec[j].second)*(vec[i].second-vec[j].second);*/
            mx=max(mx,(vec[i].first-vec[j].first)*(vec[i].first-vec[j].first)+(vec[i].second-vec[j].second)*(vec[i].second-vec[j].second));
        }
    }
    cout<<fixed<<setprecision(15)<<sqrt((double)mx)<<endl;
    return 0;
}