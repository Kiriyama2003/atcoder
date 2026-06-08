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
    //N*Nマス
	int n,m;    cin>>n>>m;

    vector<int> maxBlackCol(n, -1),
                minWhiteCol(n, 1e9+10),
                maxBlackRow(n, -1),
                minWhiteRow(n, 1e9+10);

    rep(i,m){
        int gyo,retu;    char color;
        cin>>gyo>>retu>>color;
        --gyo,--retu;
        
        if(color=='B'){
            //各列において, 
            maxBlackCol[retu] = max(maxBlackCol[retu], gyo);

            //各行において, 
            maxBlackRow[gyo] = max(maxBlackRow[gyo], retu);

        }else if(color =='W'){
            minWhiteCol[retu] = min(minWhiteCol[retu], gyo);
            minWhiteRow[gyo] = min(minWhiteRow[gyo], retu);
        }
    }

    //各行
    ll now=-1;
    rep(r,n){
        // 「もっとも右にある黒」が「もっとも左にある白」より左であること
        if((maxBlackCol[r] >= minWhiteCol[r])){
            cout << "No\n";
            return 0;
        }

        if(maxBlackCol[r] != 1e9+10){
            if(now < maxBlackCol[r]) {
                cout << "No\n";
                cout<<r;
                return 0;
            }
            now=maxBlackCol[r];
        }
    }

    now=-1;
    //各列
    rep(c,n){
        if((maxBlackRow[c] >= minWhiteRow[c])){
            cout << "No\n";
            cout<<11<<c;
            return 0;
        }

        if(maxBlackRow[c] != 1e9+10){
            if(now < maxBlackRow[c]) {
                cout << "No\n";
                return 0;
            }
            now=maxBlackRow[c];
        }
    }



    
    cout<<"Yes\n";
    return 0;
}