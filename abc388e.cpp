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

int main(){
    int N;  cin>>N;
    vector<long long> A(N);
    rep(i,N) cin>>A[i];

    sort(all(A));

    int L = 0, R = (N+1)/2, ans = 0;
    

    while(L < N/2 && R < N){
        //成立, 右も左も, 右に進める
        if( A[L]*2 <= A[R] ) ans++, L++, R++;
        else R++;   //ダメだから右を進める
    }

    cout<<ans<<"\n";
    return 0;
}
