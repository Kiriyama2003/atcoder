#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
vector<string>s;

void rec(int n3,int i,int j){
    if(n3==1){s[i][j]='#'; return;}

    //かたまりの1辺
    int t=n3/3;

    //9分割される
    for (int ti=0;ti<3;++ti) {
		for (int tj=0;tj<3;++tj) {
            //真ん中だから, .のまんま
			if ((ti==1)&&(tj==1)) continue;
                      
            rec(t,i+ t*ti, j + t*tj);
		}
	}
}

int main(){
    int n;  cin>>n;

    //最終答えの行数, 列数
    int n3=pow(3,n);

    //答えとなるsは, n3行
    s.resize(n3);
    
    //全マスに.を入れる
    rep(i,n3) s[i]=string(n3,'.');
    
    //実行フェーズ
    rec(n3,0,0);

    rep(i,s.size()) cout<<s[i]<<endl;
    return 0;
}