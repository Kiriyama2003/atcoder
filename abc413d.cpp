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
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;  cin>>T;
    rep(_,T){
        int N;  cin>>N;
        vector<ll> A(N);
        ll min_num=1e12;
        ll max_num=-1e12;
        rep(i,N) {
            cin>>A[i];
            min_num = min(min_num,abs(A[i]));
        }
        
        rep(i,N) A[i] /= min_num;
        vector<bool> check(N,false);
        rep(i,N){
            A[i] = abs(A[i]);
            if(A[i] >= 1 and A[i] <=N) check[i+1] = true;
        }

        bool ans_check=true;
        rep(i,N){
            if(check[i]==false) ans_check=false;
        }
        cout<<(ans_check?"Yes":"No")<<endl;
    }
    return 0;
}