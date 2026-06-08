#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
int main(void){
    int N;  string S;   cin>>N>>S;
    int ans =0;
    for (int i = 0; i < N; i++) {
        if(S[i] != '/') continue;
        int d = 0;
        while(true){
            int j = i - (d + 1);
            int k = i + (d + 1);
            if(!(0 <= j and j < N)) break;
            if(!(0 <= k and k < N)) break;
            if(S[j] != '1') break;
            if(S[k] != '2') break;
            d++;
        }
        ans = max(ans, 1 + d * 2);
    }
    cout<<ans<<endl;
    return 0;
}