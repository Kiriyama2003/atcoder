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
void chmax(int& a,int b){a=max(a,b);}
int main(void){

	// 入力
	int T;  cin>>T;

    vector<int> P(109),Q(109),R(109);
    rep(i,T){
        cin>>P[i]>>Q[i]>>R[i];
        --P[i],--Q[i],--R[i];
    }

    vector<int> A(21),PatA(21), PatB(21);

	// 貪欲法
	int CurrentScore = 0;
	rep(i,T){
		// パターン A の場合のスコアを求める
		int ScoreA = CurrentScore;
		rep(j,20) PatA[j] = A[j];
		++PatA[P[i]], ++PatA[Q[i]], ++PatA[R[i]];
		rep(j,20) if(PatA[j] == 0) ScoreA += 1;

		// パターン B の場合のスコアを求める
		int ScoreB = CurrentScore;
		rep(j,20) PatB[j] = A[j];
		--PatB[P[i]], --PatB[Q[i]], --PatB[R[i]];

		rep(j,20) if(PatB[j] == 0) ScoreB += 1;

		//スコアの大きい方を採用
		if(ScoreA >= ScoreB){
			printf("A\n");
			CurrentScore = ScoreA;
			rep(j,20) A[j] = PatA[j];
		}else{
			printf("B\n");
			CurrentScore = ScoreB;
			rep(j,20) A[j] = PatB[j];
		}
	}
	return 0;
}