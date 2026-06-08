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

ll dp[20][2][2][10]; // dp[pos][tight][started][max_digit]
// pos: 現在の桁位置
// tight: 範囲の上限に縛られているか
// started: 最初の数字が始まったか
// max_digit: これまで見た最大の桁

// 桁DPを用いて[L, R]以下のヘビ数の数をカウント
ll count_snake_numbers(string &num, int pos = 0, bool tight = true, bool started = false, int max_digit = 0) {
    if (pos == num.size()) {
        return started ? 1 : 0; // 数が始まっていればヘビ数とする
    }
    if (dp[pos][tight][started][max_digit] != -1) {
        return dp[pos][tight][started][max_digit];
    }

    ll res = 0;
    int limit = tight ? (num[pos] - '0') : 9;

    for (int digit = 0; digit <= limit; ++digit) {
        bool new_tight = tight && (digit == limit);
        bool new_started = started || (digit > 0);
        int new_max_digit = started ? max(max_digit, digit) : digit;

        if (!started || digit < new_max_digit) { // ヘビ数の条件を満たすか確認
            res += count_snake_numbers(num, pos + 1, new_tight, new_started, new_max_digit);
        }
    }

    return dp[pos][tight][started][max_digit] = res;
}

ll solve(ll L, ll R) {
    string L_str = to_string(L - 1); //L-1までの数
    string R_str = to_string(R);     //Rまでの数

    memset(dp, -1, sizeof(dp));
    ll count_R = count_snake_numbers(R_str);

    memset(dp, -1, sizeof(dp));
    ll count_L = count_snake_numbers(L_str);

    return count_R - count_L; //[L, R]の範囲のヘビ数
}

int main(void){
    ll L,R; cin>>L>>R;
    cout<<solve(L, R)<<endl;
    return 0;
}