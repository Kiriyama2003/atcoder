#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}
int main(void){
    vector<int> A(3);
    rep(i,3) cin>>A[i];

    vector<int> ind={0,1,2};
    bool check=false;
    do{
        if(A[ind[0]]*A[ind[1]]==A[ind[2]]) check=true;
    }while(next_permutation(all(ind)));
    cout<<(check?"Yes\n":"No\n");
    return 0;
}