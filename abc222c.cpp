#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n,m;  cin>>n>>m;
    vector<vector<char>> hand(2*n,vector<char>(m));
    rep(i,2*n) rep(j,m) cin>>hand[i][j];

    vector<int> rank(2*n,0),wincnt(2*n,0);
    rep(i,2*n) rank[i]=i;
    
    rep(i,m){
        rep(j,2*n){
            if( j % 2 == 1) continue;

            int p1=rank[j],p2=rank[j+1];


            if(hand[p1][i]==hand[p2][i]) ;
            else if(hand[p1][i]=='G' and  hand[p2][i]=='C') wincnt[p1]++;
            else if(hand[p1][i]=='P' and  hand[p2][i]=='G') wincnt[p1]++;
            else if(hand[p1][i]=='C' and  hand[p2][i]=='P') wincnt[p1]++;
            else wincnt[p2]++;
        }

        stable_sort(all(rank),[&](int i,int j){
            if(wincnt[i]==wincnt[j]) return i<j;
            return wincnt[i]>wincnt[j];});
        
    }

    for(auto v:rank) cout<<v+1<<endl;




    return 0;
}