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
	//int n,m; cin>>n>>m;
	//string s;  cin>>s;
	int N,Q;    cin>>N>>Q;
    vector<bool> B(Q,false);
    int ans=0;
    rep(i,Q){
        int A;  cin>>A; --A;
        
        /*冗長すぎる, 自作
        if(B[A] == false){        //白 -> 黒に変える
            if(A == 0){
                if(B[A+1] == true) ;
                else if(B[A+1] == false) ++ans;
            }else if(A == (N-1)){
                if(B[A-1] == true);
                else if(B[A-1] == false) ++ans;
            }else{
                if((B[A-1]==false) and (B[A+1]==false)) ++ans;      //両方とも白だから, +1
                else if((B[A-1]==true) and (B[A+1]==true)) --ans;   //両方とも黒だから, -1
                else ;                                              //片方がちがう, +-0
            }
        }else if(B[A]==true){              //黒 -> 白
            if(A==0){
                if(B[A+1] == true) ;
                else if(B[A+1] == false) --ans;
            }else if(A==(N-1)){
                if(B[A-1] == true);
                else if(B[A-1] == false) --ans;
            }else{
                if((B[A-1]==false) and (B[A+1]==false)) --ans;      //両方とも白だから, +1
                else if((B[A-1]==true) and (B[A+1]==true)) ++ans;   //両方とも黒だから, -1
                else ;                                              //片方がちがう, +-0
            }
        }
        */
        
        // chatgptさん, まあそうだよな
        int before = 0;
        if (A > 0 && B[A - 1]==true) before++;
        if (A + 1 < N && B[A + 1]==false) before++;
        if (B[A]) { // 黒→白
            if (before == 0) ans--;
            else if (before == 2) ans++;
        } else { // 白→黒
            if (before == 0) ans++;
            else if (before == 2) ans--;
        }



        B[A] = !B[A];
        cout<<ans<<endl;
    }
	return 0;
}