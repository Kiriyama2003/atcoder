#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int n,s,t,p;
vector<vector<bool>> a;
vector<int> longest_path;
int f(int t){
    return t*t+2*t+3;

}
int main(void){
    int t;  cin>>t;
    cout<<f(f(f(t)+t)+f(f(t)));
    return 0;
}