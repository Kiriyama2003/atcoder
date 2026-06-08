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
    int t;  cin>>t;
    rep(_,t){
        int N;      cin>>N;
        string S;   cin>>S;

        int l = -1;
        for (int i = 0; i < N - 1; ++i) {
            if (S[i] > S[i + 1]) {
                l = i;
                break;  //抜ける
            }
        }

        if(l == -1) {
            cout<<S<<'\n';
            
        }else{
            int r = N;
            for (int j = l + 1; j < N; ++j) {
                if (S[l] < S[j]) {
                    r = j;
                    break;
                }
            }

            string ans = S.substr(0, l) + S.substr(l + 1, r - l - 1) + S[l] + S.substr(r);
            cout << ans << '\n';
        }

        
    }
	return 0;
}